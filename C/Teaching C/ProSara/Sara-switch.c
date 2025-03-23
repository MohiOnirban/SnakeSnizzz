// sara's age switch case

#include <stdio.h>
int main (){
    int age;
    printf( " what's your age \n ");
    scanf("%d",&age);

    switch (age){
        case 1:
            printf ("Happy First Birthday!\n");
        break;
        case 2:
            printf ("Happy Second Birthday!\n");
        break;
        case 3:
            printf ("Happy Third Birthday!\n");
        break;
        case 4:
        printf ("Happy Last Birthday!\n");
        break;
        case 15:
        printf ("business trip, where we’ll explore business, maybe we will find a business maybe it will be a different trip, but let’s go. Then as we said, we are just going; right now we’re in the train and I’m writing with a cup of Chinese tea, Sara is sleeping with my jacket, Mahir start watching series, and The Couple, having their times… You know what happened?");
        default:
            printf(" Sara's age is under 5 years");
    }
    return 0;   
}