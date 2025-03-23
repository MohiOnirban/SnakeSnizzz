#include <iostream>
using namespace std;

//learning class implementation
class car {
    public :
    string name ;
    int speed ;
    string model;
car(string n, int s, string m){
    name = n;
    speed = s;
    model = m;
    }
    void display(){
        cout << "Name: " << name << ", Speed: " << speed << " km/h, Model: " << model << endl;
    };
};

int main (){
    car redCar("Toyota", 100, "BMW");
    car blueCara("Sara", 100, "Benz");
    redCar.display();
    blueCara.display();
    return 0 ;

}