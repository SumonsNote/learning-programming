#include <stdio.h>

int main()
{
    double kg, pound;

    printf("Enter KG: ");
    scanf("%lf", kg);

    pound = kg * 2.2046;

    printf("Pound: %.5lf", pound);
    return 0;
}