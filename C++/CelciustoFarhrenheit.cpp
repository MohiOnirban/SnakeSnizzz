#include<iostream>
using namespace std;

int main () {

    double temperature;

    cout << "Enter the temperature in Celsius: ";
    cin >> temperature;

    // Convert Celsius to Fahrenheit
    double farhrenheit = (temperature * 9/5) + 32;
    cout << "The temperature in Fahrenheit is: " << farhrenheit << " F"<<endl;

    return 0;


} 