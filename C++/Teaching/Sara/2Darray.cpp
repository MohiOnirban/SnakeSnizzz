
#include <iostream>
using namespace std;
// learning 2d array

int main (){
int num [3][5]= {};
    cout<< "Give the matrix"<<endl;
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin>>num[i][j];
        }
        cout << endl;  // to print new line after each row
     }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << num[i][j] << " ";
        }
        cout << endl;  // to print new line after each row
     }
    }

