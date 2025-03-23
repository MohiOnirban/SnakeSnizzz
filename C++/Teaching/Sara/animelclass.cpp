#include<iostream>
using namespace std;

class Animal {
    string name;
    string color;
    int age;
    string size;
    public:
    Animal(string n, string c, int a, string s) {
        name = n;
        color = c;
        age = a;
        size = s;
    }
    void display(){
        cout << "Name: " << name
         << ", Color: " 
         << color << ", Age: " 
         << age << ", Size: " 
         << size << endl;
    }
    
};
int main (){
    Animal tiger("Pitter", "yellow", 3, "Big");
    tiger.display();
    Animal lion("Simba", "black", 5, "Big");
    lion.display();
}