#include <stdio.h>

int main()
{
    float length, width, area;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    area = length * width;

    printf("Ara of rectangle is: %0.2f sq. units", area);

    return 0;
}