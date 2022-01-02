#include <stdio.h>

int main()
{
    unsigned int number = 0;
    unsigned int rebnum = 0;
    unsigned int temp = 0;

    printf("\nEnter a positive number: ");
    scanf("%u", &number);

    temp = number;

    do
    {
        rebnum = 10 * rebnum + temp % 10;
        temp = temp / 10;
    }
    while(temp);
    printf("\nThe number %u reversed is %u rebnum ehT\n", number, rebnum);
    return 0;
}