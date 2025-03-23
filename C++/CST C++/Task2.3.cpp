/*Write a C++ program to print the following character pattern using loop statements:
* 
***
*****
*******
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a Number to print the character pattern: ";
    cin>>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}