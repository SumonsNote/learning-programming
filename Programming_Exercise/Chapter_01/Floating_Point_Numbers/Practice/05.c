#include <stdio.h>

int main()
{
    float length, width;

    scanf("%f %f", &length, &width);

    float area = length * width;

    printf("Area: %.2f", area);

    return 0;
}