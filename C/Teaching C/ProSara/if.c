//if the price is under 100 then it's cheap.
//if the price is 100 to 500 then it's moderate
//if the price is more than 500 to 1500 then it's costly.
//if the price is more than 1500 then it's expensive.
//and handle the invalid choice

#include <stdio.h>
int main(){ 
    int price ;
    printf("what's the price is: ");
    scanf("%d",&price); 
if (price <=0)
{
    printf("price is invalid");}
 else if (price < 100){
    printf("the price is cheap" );
}
else if ( price>=100 && price <= 500){
    printf("the price is moderate ");
}
else if ( price > 500 && price < 1500){
    printf("the price is costly ");
}
else 
    printf("the price is expensive ");
}
