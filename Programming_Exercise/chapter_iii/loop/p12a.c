#include <stdio.h>

int main()
{
    double s, h, area;
    scanf("%lf", &s);
    scanf("%lf", &h);

    area = .5*s*h;

    printf("Area is: %.2lf", area);

    return 0;
}