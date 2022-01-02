#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int chosen = 0;
    int guess = 0;
    int count = 3;
    int limit = 20;

    srand(time(NULL));
    chosen = 1 + rand() % limit;

    printf("\nTime is a guessing game.");
    printf("\nI have chosen a number between 1 and 20 which you must guess.\n");

    for( ; count > 0; --count)
    {
        printf("\nYou have %d tr%s left.", count, count == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if(guess == chosen)
        {
            printf("\nCongratulations. You gussed it!\n");
            return 0;
        }
        else if(guess < 1 || guess > 20)
            printf("I said the number between 1 and 20.\n ");
        else
            printf("Sorry, %d is wrong. My number is %s than that.\n", guess, chosen > guess ? "greater" : "less");
    }
    printf("\nYou have had three tries and failed. The number was %ld\n", chosen);

    return 0;
}