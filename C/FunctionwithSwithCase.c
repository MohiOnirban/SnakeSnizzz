#include <stdio.h>

int addition (int a , int b) {
    return a+b;
}

int subtraction (int a , int b) {
    return a-b;
}

int multiplication (int a , int b) {
    return a*b;
}
float division (int a , int b) {
    return (float)a/b;
}

int main () {

    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    printf ("What you want to do? Enter the a digit\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: 
        
        printf("Addition: %d\n", addition(num1, num2));
        
        break;
    case 2: 

        printf("Subtraction: %d\n", subtraction(num1, num2));

        break;
    
    case 3: 
            printf("Multiplication %d\n", multiplication(num1, num2));
        break;
    
    case 4:

        printf("Division: %.2f\n", division(num1, num2));
        break;
    
    default:
    
        printf("Invalid choice. Please try again.\n");
        break;
    }


}


