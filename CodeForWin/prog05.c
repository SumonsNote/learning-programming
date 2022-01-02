#include <stdio.h>

int main()
{
    float cm, meter, km;

    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    meter = cm / 100.00;
    km = cm / 100000.00;

    printf("Length in meter: %0.2f\n", meter);
    printf("Length in Kilometer: %0.2f\n", km);

    return 0;
}