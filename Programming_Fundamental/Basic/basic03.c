#include <stdio.h>

int main()
{
    float radius, diameter, circumference, area;

    printf("Enter radius of a circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * (radius * radius);

    printf("\n");

    printf("Diameter is: %f\n", diameter);
    printf("Circumference: %f\n", circumference);
    printf("Area %f\n", area);

    return 0;
}
