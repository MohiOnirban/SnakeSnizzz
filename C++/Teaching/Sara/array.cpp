#include <iostream>
using namespace std;
// we gonna learn array.
int main() {
    int arr[5] ;
    cout << "Enter 5 integers: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        cout << "Element at index " << i << " is: " << arr[i] << endl;
    }

    return 0;
}