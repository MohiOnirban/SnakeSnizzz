#include <iostream>
using namespace std;

double addition(double x, double y){
    return x + y;
}
double subtraction(double x, double y){
    return x-y;
}
double Multiplication(double x, double y){
    return x*y;
}

double Divide(double x, double y){
    return x/double(y);
}

int main (){
    
    char choice;
    do {
    double numOne, numTwo;
    cout<<("Enter Number One: ");
    cin>> numOne;
    cout<<("Enter Number two: ");
    cin>> numTwo;
    
    int operatorName;
    double result;

    cout<<"Enter Which operator you want to:\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Divide\n"<<endl;
    cin>>operatorName;
    
     
    switch (operatorName){
        case 1: 

                cout<<("The result of addition is: ")<<addition(numOne, numTwo)<<endl;
                break;
        case 2:
                
                cout<<("The result of subtraction is: ")<<subtraction(numOne, numTwo)<<endl;
                break;
        case 3:

                cout<<("The result of multiplication is: ")<<Multiplication(numOne , numTwo)<<endl;
                break;
        case 4:

                cout<<("The result of division is: ")<<Divide(numOne, numTwo)<<endl;
                break;

        default:
                cout<<("Invalid operator. Please enter a valid operator.")<<endl;
        break;
    }
    cout<<("Do you want to perform another operation? (y/n): ");
    cin>>choice;
} while ( choice == 'y' || choice == 'Y');


}
