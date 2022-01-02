#include <stdio.h>

int main()
{
    float b, h, a;

    scanf("%f%f", &b, &h);

    a = 0.5 * b * h;

    printf("%.2f\n", a);

    return 0;
}