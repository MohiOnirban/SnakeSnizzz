#include <stdio.h>

int main() {

        int num1, num2;
        char operator;

        printf("Enter Number 1: ");
        scanf("%d", &num1);
        printf("Enter Number 2: ");
        scanf("%d", &num2);

        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &operator);

        switch (operator) {
            
                case '+':
                        printf("Addition: %d\n", num1 + num2);
                        break;

                case '-': 
                printf("Subtraction: %d\n", num1 - num2);
                        break;  

                case '*':  
                         printf("Multiplication: %d\n", num1 * num2);
                        break;  

                case '/':
                        printf("Division: %.2f\n", (float) num1 / num2);
                        break;

                default:
                        printf("Invalid choice. Please try again.\n");
                        break;

        }

    return 0;
}