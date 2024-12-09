#include<stdio.h>
int main ()
{
    int num;
    int multiplier;

    printf("\nEnter a number: \n");
    scanf("%d", &multiplier);

    for ( num=1; num<=10; num++)
    {
        printf("%d * %d = %d\n", num, multiplier, num*multiplier);
    }
}