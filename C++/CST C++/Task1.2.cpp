//program for compute and print the value a*b/c.
#include<iostream>
using namespace std;

int main(){
    bool continueLoop = true;
// Start a do-while loop that continues until the user chooses to exit.
    do{double a, b, c;
    cout<<"Enter three numbers: "<<"\na : "; 
    cin>> a;
    cout<<"b: "; 
    cin>>b;
    cout<<"c: ";
    cin>>c;
    double result = (a*b)/c;
    cout <<"The Computed value of (a*b)/c is: "<<result<<endl;
// Ask the user if they want to continue.
    cout<<"Do you want to continue (y/n)? ";
    char ch; cin>>ch;
    if (ch == 'n' || ch == 'N') {
        continueLoop = false; // Exit the loop
    }
    }while(continueLoop);
    cout<<"Program exited successfully."<<endl;
    return 0;
}