#include <iostream>
using namespace std ;

void repeatOutput ( int times)/*Function to print output based on nested loops*/ 
{
    for ( int i = 0; i < times ; i ++){ // Outer loop runs 'times' times 
        for (int j = 0; j < times ; j++){ // Inner loop also runs 'times' times for each iteration of the outer loop.
            cout <<" Returning "<<(i*times +j+1)<<" times "<<endl; // Prints the count of occurrences
        }
    }
     
}
int main (){
    int n; 
    cout <<" enter a number " ;
    cin >> n;

    repeatOutput(n); // Call the function with user input
     return 0;
}