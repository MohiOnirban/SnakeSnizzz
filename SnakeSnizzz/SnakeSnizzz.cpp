#include <iostream>
#include <cstdlib>   // For rand() and system() functions
#include <termios.h> // For terminal input handling
#include <unistd.h>  // For STDIN_FILENO
#include <fcntl.h>   // For non-blocking input
#include <unistd.h> // For usleep function

using namespace std;

// Game variables
bool gameOver;                   // Boolean flag to indicate if the game is over
bool paused;
const int height = 15; 
const int width = height*2;            // Width of the game board
          // Height of the game board
int x, y, fruitX, fruitY, score; // Snake position, fruit position, and score
int tailX[100], tailY[100]; //
int nTail;                      // Number of segments in the tail
// Enumeration for snake's direction
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir; // Current direction of the snake


//----------------------------------------------------------------
// Function to check if a key is pressed (non-blocking)
int kbhit() {
    struct termios oldt, newt; //_kbhit() for windows
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;

    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);

    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF) {
        ungetc(ch, stdin); 
        return 1;         
    }
    return 0; 
}
// Function to get a single character input
char getch() {
    struct termios oldt, newt;
    char ch;
   
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;

    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar(); 
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
//--------------------------------------------------------------------------------

void generateFruit() {
    // Ensure fruit is within bounds and not on the border
    do {
        fruitX = rand() % width;
        fruitY = rand() % height;
    } while (fruitX <= 0 || fruitX >= width - 1 || fruitY <= 0 || fruitY >= height - 1);
}

// Function to initialize the game
void SetUp() {
    gameOver = false;            // Set the game as active
    paused = false;
    dir = STOP;                  // Snake starts stationary
    x = width / 2;               // Snake's initial horizontal position
    y = height / 2;              // Snake's initial vertical position
    generateFruit();
    score = 0;                   // Start score at zero
}

// Function to draw the game board
void Draw() {
    system("clear"); // Clear the screen

    // Draw the top border
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    // Draw the game area
       for (int i = 0; i < height; i++) {
        for (int j = 0; j < width + 2; j++) {
            if (j == 0 || j == width + 1)
                cout << "#"; // Side borders
            else if (i == y && j == x)
                cout << "O"; // Snake head
            else if (i == fruitY && j == fruitX)
                cout << "F"; // Fruit
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "*"; // Snake body segments
                        print = true;
                    }
                }
                if (!print)
                    cout << " "; // Empty space
            }
        }
        cout << endl;
    }
    
    // Draw the bottom border
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    // Display the score
    cout << "Score: " << score << endl;
    if (paused){
        cout << "Paused. Press 'p' to resume." << endl;
    } 
}

// Function to handle user input
void Input() {

    if (kbhit()) { 
        char key = getchar();
        if (key == 'p') {paused = !paused;}

        if (!paused){
        switch (key) {// Check if a key is pressed
            case 'a': // Move left
                if (dir != RIGHT) // Prevent moving directly opposite
                    dir = LEFT;
                break;
            case 'd': // Move right
                if (dir != LEFT)
                    dir = RIGHT;
                break;
            case 'w': // Move up
                if (dir != DOWN)
                    dir = UP;
                break;
            case 's': // Move down
                if (dir != UP)
                    dir = DOWN;
                break;
            case 'x': // Exit game
                gameOver = true;
                break;
        }
    }
}
}
// Function to handle game logic
void Logic() {
    if (paused) return;
    //tail 
    int preX = tailX[0];
    int preY = tailY[0];
    int pre2X, pre2Y;
    tailX[0]= x;
    tailY [0]= y;

    for (int i = 1; i <nTail; i++) {
        pre2X = tailX[i];
        pre2Y = tailY[i];
        tailX[i] = preX;
        tailY[i] = preY;
        preX = pre2X;
        preY = pre2Y;

    }
    // Update snake's position based on direction
    switch (dir) {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }

    // Check for collisions with walls
   // IF YOU WANT TO COLLIDE WITH THE BOX
  if (x < 0 || x >= width || y < 0 || y >= height)
       gameOver = true;

    //IF YOU WANT TO WITHOUT COLLIDE THE BOX
   //if (x>=width) x= 0; else if (x<0) x= width-1;



    for(int i = 0; i <nTail; i++) {
        if(tailX[i] == x && tailY[i] == y)
            gameOver = true;
    }  // Check for collisions with tail segments

    // Check if snake eats the fruit
    if (x == fruitX && y == fruitY) {
        score += 100;              // Increase score
        generateFruit(); // Generate a new fruit position
        nTail++;                  // Increase the tail length
    }

}

// Main function
int main() {
    SetUp(); // Initialize the game
    // Game loop
    while (!gameOver) {// loop speed dependents on processor.
        Draw();  // Draw the game board
        Input(); // Handle user input
        Logic(); // Update game logic
        usleep(100000); // Pause for a short duration (100 milliseconds)
    }

    return 0; // Exit the program
}
