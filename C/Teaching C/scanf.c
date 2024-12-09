#include<stdio.h>
int main(){

    int x;
    int y;

    printf("Enter the value of X: ");
    scanf("%d", &x);
    printf("Enter the value of Y: ");
    scanf("%d", &y); //use for user input collection;

    int addition = x + y;
    int subtraction = x - y;
    int multiplication = x * y;
    int division = x / y;


    printf("\nSubtraction of X & Y is : %d\n", subtraction);
    printf("Multiplication of X & Y is : %d\n", multiplication);
    printf("\nDivision of X & Y is : %d\n", division);
    printf("\nAddition of X & Y is : %d\n", x + y);


    return 0;

}