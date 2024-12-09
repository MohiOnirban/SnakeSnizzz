#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {5, 10, 15, 20, 25};
    int sum = 0;

    // Loop to calculate the sum of all elements
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];                    // Add each element to sum
    }

    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}





