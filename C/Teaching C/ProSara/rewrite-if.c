#include <stdio.h>
int main(){
    int price = 0;
    printf("What's the price" );
    scanf("%d",&price);

    if (price<0){
        printf("The price is invalid");
    }
     if (price < 100){
        printf("The price is cheap");
    }
    else if (price>=100 || price <=500){
        printf("The price is moderate");
    }
    else if (price >500 && price<1500){
        printf("The price is costly");
    }
    else if(price>=1500){
        printf("The price is expensive");
    }
}