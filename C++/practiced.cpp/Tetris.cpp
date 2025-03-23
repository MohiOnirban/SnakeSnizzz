#include <iostream>
#include <vector>
#include <thread>   // For sleep functionality
#include <chrono>   // For controlling game speed
#include <termios.h>
#include <unistd.h> // For read()

using namespace std;

const int width = 10;  // Grid width
const int height = 20; // Grid height

// Define the grid
vector<vector<int> > grid(height, vector<int>(width, 0));

// Tetrimino shapes (4x4 blocks)
int shapes[7][4][4] = {
    {{0, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 0, 0}}, // I
    {{0, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 1, 0}, {0, 0, 0, 0}}, // L
    {{0, 1, 0, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}, {0, 0, 0, 0}}, // J
    {{0, 0, 0, 0}, {0, 1, 1, 0}, {0, 1, 1, 0}, {0, 0, 0, 0}}, // O
    {{0, 1, 1, 0}, {1, 1, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}, // S
    {{1, 1, 0, 0}, {0, 1, 1, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}, // Z
    {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}}  // T
};

// Display the grid
void displayGrid() {
    system("clear"); // Clear the terminal screen (macOS/Linux compatible)
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            cout << (grid[y][x] ? "#" : ".");
        }
        cout << endl;
    }
}

// Check collision
bool checkCollision(int x, int y, int shapeIndex, int rotation) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            int value = shapes[shapeIndex][i][j];
            if (value && (y + i >= height || x + j < 0 || x + j >= width || grid[y + i][x + j])) {
                return true;
            }
        }
    }
    return false;
}

// Place the shape on the grid
void placeShape(int x, int y, int shapeIndex, int rotation, bool place) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (shapes[shapeIndex][i][j]) {
                grid[y + i][x + j] = place ? 1 : 0;
            }
        }
    }
}

// Clear lines
void clearLines() {
    for (int y = 0; y < height; ++y) {
        bool full = true;
        for (int x = 0; x < width; ++x) {
            if (!grid[y][x]) {
                full = false;
                break;
            }
        }
        if (full) {
            grid.erase(grid.begin() + y);
            grid.insert(grid.begin(), vector<int>(width, 0));
        }
    }
}

// Non-blocking keyboard input using termios
char getInput() {
    char buf = 0;
    struct termios old = {0};
    if (tcgetattr(0, &old) < 0) perror("tcsetattr()");
    old.c_lflag &= ~ICANON;
    old.c_lflag &= ~ECHO;
    old.c_cc[VMIN] = 1;
    old.c_cc[VTIME] = 0;
    if (tcsetattr(0, TCSANOW, &old) < 0) perror("tcsetattr ICANON");
    if (read(0, &buf, 1) < 0) perror("read()");
    old.c_lflag |= ICANON;
    old.c_lflag |= ECHO;
    if (tcsetattr(0, TCSADRAIN, &old) < 0) perror("tcsetattr ~ICANON");
    return buf;
}

int main() {
    int x = width / 2 - 2;
    int y = 0;
    int shapeIndex = 0;
    bool running = true;

    while (running) {
        // User input
        if (cin.peek() != EOF) {
            char c = getInput();
            if (c == 'a' && !checkCollision(x - 1, y, shapeIndex, 0)) x--;
            if (c == 'd' && !checkCollision(x + 1, y, shapeIndex, 0)) x++;
            if (c == 's' && !checkCollision(x, y + 1, shapeIndex, 0)) y++;
        }

        // Move down
        if (!checkCollision(x, y + 1, shapeIndex, 0)) {
            y++;
        } else {
            // Place shape and reset
            placeShape(x, y, shapeIndex, 0, true);
            clearLines();
            x = width / 2 - 2;
            y = 0;
            shapeIndex = (shapeIndex + 1) % 7;

            if (checkCollision(x, y, shapeIndex, 0)) {
                running = false; // Game over
            }
        }

        // Update grid
        displayGrid();
        placeShape(x, y, shapeIndex, 0, true);
        this_thread::sleep_for(chrono::milliseconds(500));
        placeShape(x, y, shapeIndex, 0, false);
    }

    cout << "Game Over!" << endl;
    return 0;
}
