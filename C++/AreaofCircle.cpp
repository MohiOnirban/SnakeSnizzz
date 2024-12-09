#include<iostream>
#include<cmath>
using namespace std;

int main () {
    
    
    cout << "\nEnter the radius of the circle: ";
    double redius;
    const double pi = 3.14159;
    cin>>redius;
    double area = pi * pow (redius, 2);

    cout << "The area of the circle is: " << area <<"\n\n" <<endl;

    return 0;

}