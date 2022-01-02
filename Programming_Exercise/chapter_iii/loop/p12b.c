#include <stdio.h>

int  main()
{
    double r, c, pi = 3.1415;

    scanf("%lf", &r);

    double area = pi * r * r;

    printf("Area of circle: %.2lf", area);

    return 0;
}