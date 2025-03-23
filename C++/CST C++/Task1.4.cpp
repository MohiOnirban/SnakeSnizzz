
#include <iostream>
using namespace std;

int main() {
    bool continueLoop = true;
    do {
    int examScore=0;
    int programDone=0;
    cout<< "Enter the exam score: "; cin>> examScore;
    cout <<"Enter ProgramDone score: "; cin>> programDone;
    if (examScore >= 60 &&  programDone >= 10) {
        cout<< "You passed the exam."<<endl;
    }
    else {
        cout<< "You failed the exam."<<endl;
    }
    cout<<"Do you want to continue (y/n)? ";
    char ch; cin>>ch;
    if (ch == 'n' || ch == 'N') {
        continueLoop = false; // Exit the loop
    }
}while(continueLoop);
}