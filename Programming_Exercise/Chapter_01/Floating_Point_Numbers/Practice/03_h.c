#include <stdio.h>

int main()
{
    double miles, km;

    printf("Enter Miles: ");
    scanf("%lf", &miles);

    km = miles / 0.62137;

    printf("Kilometer: %.5lf", km);

    return 0;
}