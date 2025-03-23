//learning constractor
#include<iostream>
using namespace std;

class Car {
    public:
    string brand;
    int year;

    //constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar("Toyota", 2022);
    myCar.display();

    Car friendCar("Honda", 2021);
    friendCar.display();

    Car familyCar("BMW", 2019);
    familyCar.display();

    Car otherCar("Mercedes", 2017);
    otherCar.display();
    
    Car yourCar("Ford", 2018);
    yourCar.display();

    return 0;
}