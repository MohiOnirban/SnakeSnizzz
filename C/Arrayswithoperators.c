#include <stdio.h>

int main() {

    int Result [3];

    printf("Enter your result:\nMath: ");
    scanf("%d", &Result[0]);
    printf("English: ");
    scanf("%d", &Result[1]);
    printf("Science: ");
    scanf("%d", &Result[2]);

    int totalResult = Result [0]+Result [1]+Result [2];
    float averageResult = totalResult/(float) 3;

    printf("Your total result is: %d\n", totalResult);
    printf("Your average result is: %.2f\n", averageResult);


    return 0;


}