//we gonna learn if-else statement
#include <stdio.h> //library
int main (){
    char Character;
    printf("Enter a Character: \nA. Happy\nB. Sorry\n choice: ");
    scanf("%c", &Character);// scanf for take the input from the user

    if (Character == 'A'||Character == 'a'){
        printf("Sara is Chilling.\n"); 
    }
    else if (Character == 'B'|| Character == 'b'){
        printf("I'M SORRY, SARA\n");
    }
    else {
        printf("Invalid choice, Enter A or B\n");
    }
    return 0;
} 
