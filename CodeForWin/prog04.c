#include <stdio.h>

int main()
{
    float radius, diameter, circumference, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 2 * (radius * radius);

    printf("Diameter: %0.2f units \n", diameter);
    printf("Circumference: %0.2f units \n", circumference);
    printf("Area: %0.2f sq. units", area);

    return 0;
}