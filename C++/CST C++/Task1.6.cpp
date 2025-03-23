#include <iostream>
using namespace std;
int main() {
   bool loop= true;
   do{
    int score;
    cout<<"Enter the score: ";
    cin>>score;

    if (score < 0 || score > 100) {
        cout << "Invalid score. Please enter a value between 0 and 100." << endl;
        return 1; //exit the program
    }
    switch (score/10) {
        case 10: //it refers to case 9, i didn't use break;
        case 9:
        cout<<"Grade: A";
            break;
        case 8:
        cout<<"Grade: B";
            break;
        case 7:
        cout<<"Grade: C";
            break;
        case 6:
        cout<<"Grade: D";
            break;
        default:
        cout<<"Grade: F";
        break;
        }
            cout<<endl;
            cout<<"Do you want to enter another score (y/n)? ";
            char ch;
            cin>>ch;
            if (ch == 'n' || ch == 'N') {
                loop= false;
        } 
   }while (loop);
}