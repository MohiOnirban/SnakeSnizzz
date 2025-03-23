#include<stdio.h>
//void function don't return anything
float addition (float x,float y){//here float x is a parameter;
    return x + y;}
float subtraction (float  x,float y){
    return x - y;}
float multiplication (float x, float y){
    return x * y;}
float division (float x, float y){
    return x / y;}
int main (){
    char  operator; //for asking the operations
    printf("which calculation you want to do:  \ntap : +, -, *, /\nOperation: ");
    scanf ("%c",&operator);
 float num1, num2;
    printf("Input number one and  number two");
    scanf ("%f %f",&num1, &num2);       

 switch (operator) {
 case '+':
    printf("Addition : %.2f", addition(num1, num2)); 
    break;
 case '-':
    printf("Subtraction : %.2f", subtraction(num1, num2)); 
    break;
case '*':
    printf("Multiplication : %.2f", num1 * num2); // without function we can do it too.
    printf("Multiplication : %.2f", multiplication(num1, num2)); 
    break;
case '/':
    printf("Division : %.2f", division(num1, num2)); 
break;
default:
    printf("Invalid! tap : +, -, *, /");
break;

}
}