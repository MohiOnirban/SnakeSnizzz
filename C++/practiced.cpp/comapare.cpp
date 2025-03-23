#include <iostream>

int main()
{
    int value;
    std::cout << "Enter your value of the price : " << std::endl;
    std::cin>> value;
    if (value<=100)
    {
        std::cout<<"Price is Cheap\n";
    }
    else
    {
        std::cout<<"Price is expensive\n";
    }
}