#include<stdio.h>  //for input/output operations
#include<stdlib.h> //for random number generation
#include<time.h>   //for time operations

int main()
{
    int randomNumber, guessNumber, attempts=0; // guessNumber for user's guess, and attempts will count attempts.

    srand(time(0)); //seed for random number generation.
    randomNumber = rand() % 100+1; //rand () - generate a random number between 1 and 100.

   //printf("\nWelcome to the GuesInti!!\n")
    printf("\n\nGuess a number between 1 and 100. You have 7 attempts.\n");
    printf("Good luck!! G a m67 e  s t a r t. . .\n");

    //loop until user runs out of attempts.
    while (attempts <7)
    {
        printf("\nEnter your guess: ");
        scanf("%d",&guessNumber);
        attempts++;
        
        if (guessNumber > randomNumber)
        {
            printf("Too High! Guess lower.\n");
        }
        else if (guessNumber < randomNumber)
        {
            printf("Too low! Guess higher.\n");
        }
        else{
            printf("\nCongratulations!!! You guessed the number in %d attempts.\n\n\n",attempts);
            break;   // Break because user is correctly guessed.    
        }
    }
    if (attempts ==7) //if user run out of attempts
    {
        printf("\nSorry, you have run out of attempts. \nThe correct number was %d.\n\n\n",randomNumber);
    }
    
    return 0;

}