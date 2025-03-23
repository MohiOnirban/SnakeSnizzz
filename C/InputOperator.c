#include <stdio.h>
int main () {

    int num1, num2;
    char operator;

    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    if (operator == '+') {
        printf("Addition: %d\n", num1 + num2);
        } else if (operator == '-') {
            printf("Subtraction: %d\n", num1 - num2);
        } else if (operator == '*') {
            printf("Multiplication: %d\n", num1 * num2);
            } else if (operator == '/') {
                printf("Division: %.2f\n", (float) num1/num2);
            } 
    return 0;
}