//Classifying the value of a variable n.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << n << " is negative" << endl;
    } else if (n >= 0 && n <= 1) {
        cout << n << " is between 0 and 1." << endl;
    } else {
        cout << n << " is greater than 1" << endl;
    }

    return 0;
}