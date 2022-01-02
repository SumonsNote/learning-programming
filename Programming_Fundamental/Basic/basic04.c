#include <stdio.h>

int main()
{
    float cm, meter, km;

    printf("Enter length in centimeter: ");
    scanf("%f", &cm);

    meter = cm / 100.0;
    km = cm / 100000.0;

    printf("Length in Meter: %f\n", meter);
    printf("Length in KM: %f\n", km);

    return 0;
}
