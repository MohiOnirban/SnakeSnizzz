#include <iostream>
using namespace std ; 
  

void checkNumber( int num ){// function to check if a num is even or odd 
    if ( num % 2 == 0) // If the remainder when divided by 2 is 0, it's even
    cout << num << " is even " << endl ; 
    else  // Otherwise, it's odd
    cout << num << " is odd " << endl ; 
}
 int main (){
    int num ; 
    char choice ;

    do { // Start a loop that will run at least once
        cout << " enter an integer : ";// Checks if input is a valid integer
         
         if ( cin >> num ){
            checkNumber ( num );// Calls the function to check even or odd
         } else {
            cout << " invalid input ! please enter an integer ." << endl ; 
            cin.clear();// clears the error flag on cin 
            cin.ignore ( 10000 , '\n');// Discards invalid input from the buffer
         }
          // Asking the user if they want to continue
        cout << " do you want to enter another number ? (y/n): ";
        cin >> choice ;
      
    } while ( choice == 'y' || choice == 'Y');// Loop runs again if user enters 'y' or 'Y'


    cout << " programm  ended. "<<endl;
    return 0;

 }