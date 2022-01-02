#include <stdio.h>

float area_of_circle(float r);

int main()
{
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    float area;
    area = area_of_circle(r);
    printf("Area of circle is: %.2f\n", area);
    return 0;
}

float area_of_circle(float r)
{
    float area;
    area = 3.14 * r * r;

    return area;
}