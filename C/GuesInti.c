#include<stdio.h>  //for input/output operations
#include<stdlib.h> //for random number generation
#include<time.h>   //for time operations

int main()
{
    int number, guess, attempts=0; //number for random number, user's guess, and attempts counter.


    srand(time(0)); //seed for random number generation.
    number = rand() % 100+1; //generate a random number between 1 and 100.

    printf("\nWelcome to the GuesInti!!\n");
    printf("Guess a number between 1 and 100. You have 7 attempts.\n");
    printf("Good luck!! G a m e  s t a r t. . .\n\n");

    //loop until user runs out of attempts.
    while (attempts <7)
    {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        attempts++;
        
        if (guess > number)
        {
            printf("Too High! Guess lower.\n");
        }
        else if (guess < number)
        {
            printf("Too low! Guess higher.\n");
        }
        else{
            printf("\nCongratulations!!! You guessed the number in %d attempts.\n",attempts);
            break;   // Break because user is correctly guessed. 
        
        }
    }
    
    if (attempts ==7) //if user run out of attempts
    {
        printf("\nSorry, you have run out of attempts. The correct number was %d.\n",number);
    }
    
    

}