#include <iostream>
using namespace std;

int main() {
    int number;
    char choice;
    bool Choice = true; // Boolean variable to control the loop

    do {
        cout << "Enter a number: ";
        cin >> number;

        // Check if the number is even or odd
        if (number == 0) {
            cout << number << " is not even or odd." << endl;
        } 
        else if (number % 2 == 0) {
            cout << number << " is even." << endl;
        } 
        else {
            cout << number << " is odd." << endl;
        }

        // Ask the user if they want to continue
        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;

        // Update boolean variable based on user input
        Choice = (choice == 'y' || choice == 'Y');

    } while (Choice); // Loop continues while Choice is true

    cout << "Thank you for using the program!" << endl;
    return 0;
}



/* #include <iostream>
using namespace std;

//this code is from ChatGPT.

int main() {
    int number;
    char choice;

    do {
        cout << "Enter a number: ";
        cin >> number;

        // Check if the number is even or odd
        if ( number == 0){
            cout << number << " is even." << endl;
        }
        
        else if(number % 2 == 0) {
            cout << "Zero is not even or odd." << endl;

        } 
        else {
            cout << number << " is odd." << endl;
        }

        // Ask the user if they want to continue
        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Loop continues if user enters 'y' or 'Y'

    cout << "Thank you for using the program!" << endl;
    return 0;
}
*/