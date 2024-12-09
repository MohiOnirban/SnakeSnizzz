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
    double numOne, numTwo;

    cout <<("Enter Number one: ");
    cin>> numOne;
    cout<<("Enter Number two: ");
    cin>> numTwo;
    int operatorName;
    double result;

    cout<<"Enter Which operator you want to:\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Divide\n"<<endl;
    cin>>operatorName;

    switch (operatorName){
        case '+': 
                result = addition(numOne, numTwo);
                cout<<("The result of addition is: ")<<result<<endl;
                break;
        case '-':
        result = subtraction(numOne, numTwo);
        cout<<("The result of subtraction is: ")<<result<<endl;
                break;
        case '*':
        result = numOne * numTwo;
        cout<<("The result of multiplication is: ")<<result<<endl;
                break;
        case '/':
            result = numOne / double (numTwo);
            cout<<("The result of division is: ")<<result<<endl;
                break;

        default:
                cout<<("Invalid operator. Please enter a valid operator.")<<endl;

    }


}
