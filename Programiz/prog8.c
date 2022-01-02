#include <stdio.h>

int main()
{
    double first_number, second_number, temp;

    printf("Enter first number: ");
    scanf("%lf", &first_number);

    printf("Enter second number: ");
    scanf("%lf", &second_number);

    temp = first_number;
    first_number = second_number;
    second_number = temp;

    printf("\nAfter swapping, first_number: %.2lf\n", first_number);
    printf("After swapping, second_number: %.2lf", second_number);

    return 0;
}