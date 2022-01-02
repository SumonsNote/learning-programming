#include <stdio.h>
float PI = 3.1416;
float circle_area(int c);
int main()
{
    int radius;
    float cirle = circle_area(radius);
    printf("Value of a radius is: %0.2f", cirle);
    return 0;
}

float circle_area(int c)
{
    int r;
    float area;

    printf("Enter a value of redius: ");
    scanf("%d", &r);

    area = PI * (r * r);

    return area;
}