#include <stdio.h>

int main(void)
{
    int choosen = 15;
    int guess = 0;
    int count = 3;

    printf("\nThis is a guessing game.");
    printf("\nI have choosen a number between 1 and 20 which you must guess.\n");
    for(; count > 0; --count)
    {
        printf("\nYou have %d tr%s left.", count, count == 1 ? "y" : "ies");
        printf("\nEnter a guess: ");
        scanf("%d", &guess);

        if(guess == choosen)
        {
            printf("\nCongratulations. You guessed it!\n");
            return 0;
        }
        else if(guess < 1 || guess > 20)
            printf("I said the number is between 1 and 20.\n");
        else
            printf("Sorry! %d is wrong. My number is %s than that.\n", guess, choosen > guess ? "greater" : "less");
    }
    printf("\nYou have had three tires and failed. The number was %d\n", choosen);

    return 0;
}