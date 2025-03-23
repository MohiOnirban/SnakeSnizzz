#include<stdio.h>
int main () {

    int price;

    printf("Enter the price of the item: ");
    scanf("%d", &price);

    if (price <0){
        printf("Invalid price entered.\n");

    }
    else if (price <= 100) {

    printf("The product is inexpensive.\n");

    }
    else if (price >100 &&  price <=500){

    printf("The product is moderatly expensive.\n");
    }
    else  {

    printf("The product is expensive.\n");
    }



}

