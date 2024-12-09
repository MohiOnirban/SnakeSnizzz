#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int main (){

    const short minValue = 1;
    const short maxValue = 6;

    srand(time(0)); // Seed the random number generator with the current time
    short firstValue = (rand() % (maxValue - minValue + 1)) + minValue;
    short secondValue = (rand() % (maxValue - minValue + 1)) + minValue;

    cout <<"\n"<< firstValue << ", " << secondValue<< "\n\n";

    return 0;


}