#include <iostream>
#include <cmath>
using namespace std;

double triArea(double a, double b, double c) {
    double s = (a + b + c) / 2;  
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Ensure valid triangle (Error handling)
    if (area > 0)  
        return area;
    else
        return -1;
}


int main() {
    cout << "Give the 3 lengths of the triangle: ";
    double lOne, lTwo, lThree;
    cin >> lOne >> lTwo >> lThree;

    double area = triArea(lOne, lTwo, lThree);

    if (area > 0)
        cout << "The area of the triangle is: " << area << endl;
    else
        cout << "Invalid triangle dimensions!" << endl;

    return 0;
}
