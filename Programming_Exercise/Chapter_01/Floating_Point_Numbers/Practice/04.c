#include <stdio.h>

int main()
{
    double length, area;

    scanf("%lf", &length);

    area = length * length;

    printf("Area: %.2lf", area);

    return 0;
}