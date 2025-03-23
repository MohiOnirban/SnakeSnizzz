#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Allocating memory dynamically for storing student marks
    int* marks = new int[n];

    cout << "Enter marks of " << n << " students: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    cout << "Marks entered: ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }

    // Freeing allocated memory
    delete[] marks;
    return 0;
}
