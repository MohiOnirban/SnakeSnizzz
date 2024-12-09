#include<stdio.h>

float Addition (float a, float b){
    return a + b;
}

float Subtraction (float a, float b){
    return a - b;
}

float Multiplication (float a, float b){
    return a * b;
}

float Division (float a, float b){
    return a / b;
    }

int main(){
    float numberOne, numberTwo,result;
    char operators;

    printf("Enter first number: ");
    scanf("%f", &numberOne);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operators);
    printf("Enter second number: ");
    scanf("%f", & numberTwo);
    


    switch (operators){
        case '+':
            result = Addition(numberOne, numberTwo);
            printf("The sum is: %.2f\n", result);
            break;
        case '-':
            result = Subtraction(numberOne, numberTwo);
            printf("The difference is: %.2f\n", result);
            break;
        case '*':
            result = Multiplication(numberOne, numberTwo);
            printf("The product is: %.2f\n", result);
            break;
        case '/':
            result = Division(numberOne, numberTwo);
            printf("The Division is: %.2f\n", result);
    }

}