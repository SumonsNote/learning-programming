#include <stdio.h>

int main()
{
    int n = -55;

    if(n < 0) {
        printf("The number is Negative\n");
    }
    else if(n > 0) {
        printf("The number is Positive\n");
    }
    else {
        printf("The number is ZERO!\n");
    }

    int number = 12;

    if (number > 10) {
        printf("The number is greater than ten\n");
    }
    else {
        printf("The number is smaller than ten\n");
    }

    int n = 31;

    if (n < 30) {
        printf("n is less than 30.\n");
    }
    else if (n < 40) {
        printf("n is less than 40.\n");
    }
    else if (n < 50) {
        printf("n is less than 50.\n");
    }

        int number;

        printf("Please enter a integer number: ");
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("The number is even\n");
        }
        else {
            printf("The number is odd\n");
        }

        return 0;
}