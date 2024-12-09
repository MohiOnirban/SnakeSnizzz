#include<stdio.h>

//This program is limited to 1 to 50, because it's the requirement of my homework.
int main ()
{
    int number;
    printf("\nEnter a number between 1 and 50: \nNumber:  ");
    scanf("%d", &number);

    if (number>1 && number<=50)
    {
       if(number%3==0 && number%5==0)
        {
            printf("The number is actually a FizzBuzz\n");
        }
        else if(number%3==0)
        {
            printf("The number is actually a Fizz\n");
        }
        else if (number%5==0)
        {
            printf("The number is actually a Buzz\n");
        }
        else
        {   
            printf("The number you give %d. \nIt's not divided by 3 or 5. \n", number);
        }
    }
    else 
    {
        printf("Please, enter a number between 1 and 50.\n"); 
    }
    return 0;
}