#include <iostream>
#include <string>
#include <algorithm> //librar for sort function
using namespace std;

int main() {


    int numOf;
    cout << "\nEnter the number of classmates: ";
    cin >> numOf;

    string classmateName [numOf];
    
    for (int i = 0; i < numOf; i++) {
        cout << "Enter the name of a classmate " << (i+1) << ":";
        cin >> classmateName[i];
    }

    //sort for sorting names in alphabetical order.    
    sort(classmateName, classmateName + numOf);


    cout << "\nClassmate names in alphabetical order: \n";
    for (int i = 0; i < numOf; i++) {
        cout << classmateName[i] << " \n";
    }

    return 0;
        
}


    