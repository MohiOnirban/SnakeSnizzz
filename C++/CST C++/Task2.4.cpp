//. Write a C++ program to output all prime numbers in the range of [2,1000] using loop statements.
#include<iostream>
using namespace std;
bool isPrime(int posNumber) {
    if (posNumber <= 1) return false;
//Without sqrt(posNumber), we would check all numbers up to posNumber-1, which is inefficient.
for (int i = 2; i <= sqrt(posNumber); i++) {
        if (posNumber % i == 0) return false;
    }
    return true;
}
int main (){
    cout<<"All prime numbers in the range of [2,1000] are: "<<endl;
    for (int i = 2; i <= 1000; i++) {
        if (isPrime(i))  // Check if the number is prime using the isPrime function.
        cout<<i<<endl;
    }
    return 0;
}