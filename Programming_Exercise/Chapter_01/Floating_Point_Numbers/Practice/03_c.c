#include <stdio.h>

int main()
{
    double feet, meter;
    scanf("%lf", &feet);

    meter = feet / 3.2808;

    printf("%2.lf\n", meter);

    return 0;
}