#include<iostream>
#include<cmath>

using namespace std;
int main ()
{
    double base, power, result;
    cout<<"\nWhat is the Base: ";
    cin>>base;
    cout<<"\nWhat is the Power\n";
    cin>>power;

    result = pow (base, power);
    cout<<"\nThe result is "<<result;



}