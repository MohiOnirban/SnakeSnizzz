#include<stdio.h>

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
    /*if(b != 0) { 
        return (float)a/b;
     }
     else {
        printf("Division: Error: Division by zero is not allowed.\n");
    return -1.0;
    }*/
    
}

    int main () {
    int num1, num2;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);

    printf("Addition: %d\n", addition(num1, num2));
    printf("Subtraction: %d\n", subtraction(num1, num2));
    printf("Multiplication %d\n", multiplication(num1, num2));
    printf("Division: %.2f\n", division(num1, num2));

   /*float result = division(num1, num2);
    if (result){
        printf("Division: %.2f\n", division(num1, num2));

   
    }*/
    // There was a GREAT PROBLEM we solved it together!! 
    //thanks ChatGPT, Osama bro, and 

    return 0;





    }