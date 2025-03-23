//learning constractor with teacher example

#include <iostream>
using namespace std;
class Teacher{
    string name;
    float angryLevel;
    float goodLevel;
    public:
    Teacher (string n, float a, float g){
        name = n;
        angryLevel = a;
        goodLevel = g;
    }
    void display(){
        cout<<"Name: "<<name<<", Angry Level: "<<angryLevel<<", Good Level: "<<goodLevel<<endl;
    }

};
int main(){
    Teacher wu("Jeremey", 3.5, 7.5); 
        wu.display();

    }

    