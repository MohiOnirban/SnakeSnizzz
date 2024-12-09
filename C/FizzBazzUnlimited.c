#include<stdio.h>

//FizzBazz with if else conditions. But this one is not limited to 50.
int main()
{
    int number, fizz, bazz, fizzbuzz;
    printf("\nGive any number between 1-50.\nNumber: ");
    scanf("%d", &number);

    fizz=number%3==0;
    bazz=number%5==0;
    fizzbuzz=fizz && bazz;

    if(fizzbuzz)
    {
        printf("FizzBuzz\n");

    }
    else if(fizz)
    {
        printf("Fizz\n");

    }
    else if(bazz)
    {
        printf("Buzz\n");

    }
    else
    {
        printf("%d\n", number);
    }

    return 0;
}