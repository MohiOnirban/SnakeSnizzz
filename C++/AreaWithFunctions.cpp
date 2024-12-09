#include <iostream>
using namespace std;

    double RectArea (double lenght, double width){
    return lenght * width;

    }
    double SqArea (double lenght){

    return lenght * lenght;

    }
    double TriArea (double base, double height){

    return (base * height) / 2;

    }   

    double ParaArea (double base, double height){
        return (base * height);
    }

    double RumArea (double base, double height){
        return (base * height) / 2;
    }

    double CirArea (double redious){
        return (redious * redious) * 3.14159;
    }


int main (){
    
    cout << "This is Area Calculator" << endl;
    cout << "Choose the shape you want to calculate: \n1. Rectangle\n2. Square\n3. Triangle\n4. Parallelogram\n5. Rhombus\n6. Circle" << endl;
    int choice;
    cout << "Choice: ";
    cin >> choice;

    double length, width, base, height, redious;

    if (choice>6 && choice<0){
        cout << "Invalid choice. Please try again." << endl;
        return 0;

    } else if (choice==1){
        cout << "Enter the length and width of the rectangle: "<<endl;
        cout <<"Lenght = ";
        cin>>length;
        cout << "Width = ";
        cin>> width;
        cout << "The area of the rectangle is: " << RectArea(length, width) << endl;

    } else if (choice==2){
        cout <<"Enter the length and width of the square: "<<endl;
        cout << "Length = ";
        cin>>length;
        cout << "The area of the square is: " << SqArea(length) << endl;

    } else if (choice==3){
        cout << "Enter the base and height of the triangle: "<<endl;
        cout << "Base = ";
        cin >> base;
        cout << "Height = ";
        cin >> height;
        cout << "The area of the triangle is: " << TriArea(base, height) << endl;

    } else if (choice==4){
        cout << "Enter the base and height of the parallelogram: "<<endl;
        cout << "Base = ";
        cin >> base ;
        cout << "Height = ";
        cin >> height;
        cout << "The area of the parallelogram is: " << ParaArea(base, height) << endl;

    } else if (choice==5){
        cout<<"Enter the base and height of the rhombus: ";
        cout << "Base = ";
        cin >> base;
        cout << "Height = ";
        cin >> height;
        cout << "The area of the rhombus is: " << ParaArea(base, height) << endl;

    } else if (choice==6){
        cout << "Enter the radius of the circle: "<<endl;
        cout<< "Redius = ";
        cin >> redious;
        cout << "The area of the circle is: " << CirArea(redious) << endl;
    } else {
        cout << "Please, enter the a number from the choice"<<endl;
        
    }

    return 0;
}