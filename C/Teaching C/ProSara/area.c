#include<stdio.h>
int main(){
    float lenght, width, height;

    int choice;
    printf("Choose which area you want to calculate: \n1. Rectangle\n 2. Trianle\n");
    printf("The Choice is : ");
    scanf("%d", &choice);
    switch(choice){
    case 1:
    printf("Enter the length and width of rectangle: ");
    scanf("%f %f",&lenght, &width);
    printf("Area of rectangle = %.2f",lenght*width);
    break;

    case 2:
    printf("Enter the length and width of triangle: ");
    scanf("%f %f",&lenght, &width);
    printf("Area of triangle = %.2f",.5*lenght*width);
    break;
    }
}
