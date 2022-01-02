#include <stdio.h>

int main()
{
    int school_open, competetion, early_rising;

    printf("School Open: ");
    scanf("%d", &school_open);

    printf("Competetion: ");
    scanf("%d", &competetion);

    // school_open = 0, competetion = 0;
    early_rising = school_open || competetion;
    printf("%d %d => %d\n", school_open, competetion, early_rising);

    // school_open = 1, competetion = 0;
    // early_rising = school_open || competetion;
    // printf("%d %d => %d\n", school_open, competetion, early_rising);

    // school_open = 0, competetion = 1;
    // early_rising = school_open || competetion;
    // printf("%d %d => %d\n", school_open, competetion, early_rising);

    // school_open = 1, competetion = 1;
    // early_rising = school_open || competetion;
    // printf("%d %d => %d\n", school_open, competetion, early_rising);

    return 0;
}