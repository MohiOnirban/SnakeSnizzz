#include<iostream>

using namespace std;
int main()
{
    string prename = "mohi";
    string x;

    cout <<"Input the password ";
    cin>>x;

    if(x==prename)
    {
        cout<<"\nLoged in!!\n";
    }
    else
    { 
        cout<<"\nWrong!! Try again";
    }

}