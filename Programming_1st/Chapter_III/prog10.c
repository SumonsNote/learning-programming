#include <stdio.h>

int main()
{
    int number, divisor;

    number = 12;
    divisor = 6;

    int remainder = (number  - divisor * (number / divisor));

    printf("Remainder = %d", remainder);

    return 0;
}