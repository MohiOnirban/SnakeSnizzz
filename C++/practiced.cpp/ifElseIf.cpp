#include <iostream>

using namespace std;

int main() {

int price;
cout << "\nEnter the price of the item: ";
cin >> price;
if(price<0){
    cout<<"invalid price entered. Please enter a positive number. \n";
}
else if (price <= 100) {
    cout << "The item is cheap.\n "<< endl;
} 

else if (price > 100 && price <= 500) {
    cout << "The item is moderately priced.\n" << endl;
}

else if (price >500)
{
    cout << "The item is expensive.\n" << endl;
}

else if (price >= 1000){

    cout << "The item is very expensive.\n" << endl;
}

else {
    cout << "Invalid price entered.\n" << endl;
}

return 0;
}

    