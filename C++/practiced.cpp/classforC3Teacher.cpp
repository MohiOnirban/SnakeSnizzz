#include<iostream>
using namespace std;

class teacherofC3{
    public:
        string name;
        int age;
        string subject;
        string angryness;
};

int main() {

    teacherofC3 Cpp;
    Cpp.name = "Best but not the best";
    Cpp.age = 21;
    Cpp.subject = "C++";
    Cpp.angryness = "Very angry";

    teacherofC3 Java;
    Java.name = "Not at all good";
    Java.age = 23;
    Java.subject = "Java";
    Java.angryness = "Not at all";

    teacherofC3 C;
    C.name = "Good";
    C.age = 22;
    C.subject = "C";
    C.angryness = "very kind";


}