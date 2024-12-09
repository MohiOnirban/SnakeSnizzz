#include<iostream>
#include<cmath>

using namespace std;
int main ()
{
    double height, base, hypo,result, hsq,bsq, answer;

    cout<<"\n\nInput the Height: ";
    cin>>height;
    cout<<"Input the Base: ";
    cin>>base;

    hsq=pow(height, 2) ;
    bsq=pow (base, 2);
    
    result= hsq+bsq;
    answer= sqrt(result);
    cout<<"Hypotenuse is: "<<answer;
    cout<<"\n\n";

}