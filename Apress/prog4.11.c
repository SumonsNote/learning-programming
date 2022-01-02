#include <stdio.h>

int main()
{
    unsigned long sum = 1UL;
    unsigned int j = 1U;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    for(unsigned int i = 1; i <= count; ++i)
    {
        sum = 1UL;
        j = 1;
        printf("\n1");

        while(j < i)
        {
            sum += ++j;
            printf(" + %u", j);
        }
        printf(" = %lu", sum);
    }
    printf("\n");
    return 0;
}