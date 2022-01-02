#include <stdio.h>

int main()
{
    double r, sphare;
    scanf("%lf", &r);

    sphare = (4/3.0) * 3.14159 * r * r * r;

    printf("VOLUME = %.3lf\n", sphare);

    return 0;

}