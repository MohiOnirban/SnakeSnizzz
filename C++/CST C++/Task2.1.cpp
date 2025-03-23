#include<iostream>
#include<cmath> // For sqrt function
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
//Without sqrt(num), we would check all numbers up to num-1, which is inefficient.
for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    bool repeat;
    do {
        int posNumber;
        cout << "Enter a positive integer: ";
        cin >> posNumber;

        // Check if the number is prime using the isPrime function
        if (isPrime(posNumber)) {
            cout << posNumber << " is a prime number." << endl;
        } else {
            cout << posNumber << " is not a prime number." << endl;
        }
        
        // Ask user if they want to try again
        char choice;
        cout << "Do you want to try again? (y/n): ";
        cin >> choice;
        
        repeat = (choice == 'y' || choice == 'Y'); // Set repeat condition based on user input
        
    } while (repeat); // Repeat if repeat is true
    
    return 0;
}
