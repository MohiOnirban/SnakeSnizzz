#include <iostream>


//this code is from ChatGPT.

int main() {
    int number;
    char choice;

    do {
        std::cout << "Enter a number: ";
        std::cin >> number;

        // Check if the number is even or odd
        if ( number == 0){
            std::cout << number << " is even." << std::endl;
        }
        
        else if(number % 2 == 0) {
            std::cout << "Zero is not even or odd." << std::endl;

        } 
        else {
            std::cout << number << " is odd." << std::endl;
        }

        // Ask the user if they want to continue
        std::cout << "Do you want to enter another number? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Loop continues if user enters 'y' or 'Y'

    std::cout << "Thank you for using the program!" << std::endl;
    return 0;
}
