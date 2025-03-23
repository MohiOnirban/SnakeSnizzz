#include <iostream>
using namespace std;

int main() {
    int student;
    cout<< "Enter the number of students: ";
    cin>>student;
    string name []= {};
    for (int i =0; i <student; i ++){
        cout<<"Student "<<i+1<<": ";
        cin>>name[i];
    
    }
    for (int i =0; i <student; i ++){
        cout<<i<<". "<<name[i]<<endl; 
    
    }

    //task is : ask the user to give the user's friends name list;
    // and print out out their friends name in alphabetical order
    // then print out their friends name in reverse alphabetical order
    // and print out their friends name in reverse alphabetical order, but only if their name starts with a vowel
    // and their name contains at least one uppercase letter.


    
    /*
    i= 0;
    student 1: 
    i= 1;
    student 2: 
    */
}