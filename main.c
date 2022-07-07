// Number Guessing Game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Variable declaration
    int number, guess, numberofguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // random number generator

    printf("\n      -------- Start --------      \n");

    do
    {
        printf("\nGuess the number between 1 to 100 : ");
        scanf("%d", &guess);
        if (number > guess)
        {
            printf("Ohh! It's not take higher number please\n");
        }
        else if (number < guess)
        {
            printf("Ohh! Its's not take lower number please\n");
        }
        else
        {
            printf("WOW! You guessed it in %d attemps.\n", numberofguesses);
        }

        numberofguesses++; // calculate number of guesses

    } while (guess != number);

    printf("\n      ------ Game Over ------      \n\n");

    return 0;
}