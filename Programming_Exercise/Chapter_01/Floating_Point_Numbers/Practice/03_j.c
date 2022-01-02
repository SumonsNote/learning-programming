#include <stdio.h>

int main()
{
    double kph, mph;

    printf("Enter miles for km: ");
    scanf("%lf", &mph);

    kph = mph * 1.609344;

    printf("MPH: %.5lf", kph);

    return 0;
}