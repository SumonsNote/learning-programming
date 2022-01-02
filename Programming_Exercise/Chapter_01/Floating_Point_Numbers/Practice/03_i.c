#include <stdio.h>

int main()
{
    double km_per_hour, miles_per_hour;

    printf("Enter Kilometer for Miles: ");
    scanf("%lf", &km_per_hour);

    miles_per_hour = km_per_hour / 1.609344;

    printf("Miles per hour: %.5lf", miles_per_hour);

    return 0;
}