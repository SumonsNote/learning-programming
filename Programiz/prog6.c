#include <stdio.h>

int main()
{
    int dividend, divisior, quotient, remainder;

    printf("Enter a dividend: ");
    scanf("%d", &dividend);

    printf("Enter a divisor: ");
    scanf("%d", &divisior);

    quotient = dividend / divisior;
    remainder = dividend % divisior;

    printf("Quotient is: %d\n", quotient);
    printf("Remainder is: %d", remainder);
    return 0;
}