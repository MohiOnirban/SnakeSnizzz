//Found out task two is based on the Fibonacci series
#include <iostream>
#include <cmath> 
using namespace std;

struct Fibonacci {
    int denominator;
    int numerator;
};
// Function to calculate the sum of the series
double calculateSum(int n) {
    double sum = 0;
    Fibonacci fib = {1, 2}; 
    int i = 1;

    while (i <= n) {
        double term = static_cast<double>(fib.numerator) / fib.denominator;
        sum += pow(-1, i + 1) * term;
        
        // Generate next Fibonacci numbers
        int nextFib = fib.denominator + fib.numerator;
        fib.denominator = fib.numerator;
        fib.numerator = nextFib;
        
        i++; 
    }

    return sum;
}

int main() {
    int n = 1000; 
    double result = calculateSum(n);
    
    cout << "Sum of the first " << n << " terms: " << result << endl;
    return 0;
}
