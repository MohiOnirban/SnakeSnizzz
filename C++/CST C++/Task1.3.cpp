//program for print firstName and lastName. 
#include <iostream>
using namespace std;

int main() {
    string firstName, lastName;
    int age;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your full name is: " << firstName << " " << lastName << endl;
    cout << "Your age is: " << age << endl;

    return 0;
}