#include <stdio.h>

int main(void)
{
    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("\nEnter the of integers you want to sum: ");
    scanf(" %u", &count);

    for(unsigned int i = 1; i <= count; sum += i++)

    printf("\nTotal of the first %u numbers is %llu\n", count, sum);
    return 0;
}