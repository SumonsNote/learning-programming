#include <stdio.h>

int main()
{
    unsigned long sum = 0UL;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    for(unsigned int i = 1; i <= count; ++i)
    {
        sum = 0UL;

        for(unsigned int j = 1; j <= i; ++j)
            sum += j;

        printf("\n%u\t%5lu",i, sum);
    }
    printf("\n");
    return 0;
}