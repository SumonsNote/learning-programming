#include <stdio.h>

int main()
{
    float length, area;

    scanf("%f", &length);

    area = (length * length) / 2;

    printf("Area: %.2f", area);

    return 0;
}