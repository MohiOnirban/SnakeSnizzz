#include <stdio.h>
int main(){
    int month;
    printf("choose a number from 1 to 12 : ");
    scanf("%d",&month);

    switch (month){
        case 1 :
             printf(" the month is jan\n");
             break;
        case 2 :
             printf("the month is feb\n");
             break;
        case 3 :
             printf("the month is mar\n");
             break;
        case 4 :
            printf("the month is apl\n");
             break;
        case 5:
            printf ("the month is may\n ");
            break;
        case 6:
            printf ("the month is jun\n");
            break;
             case 7 :
             printf(" the month is jul\n");
             break;
        case 8:
             printf("the month is aug\n");
             break;
        case 9 :
             printf("the month is sep\n");
             break;
        case 10 :
            printf("the month is oct\n");
             break;
        case 11:
            printf ("the month is nom\n ");
            break;
        case 12:
            printf ("the month is dec\n");
            break;
        
        default :
        printf("Error!!\nchoose a number between 1 and 12. ");
    }
}

