#include <stdio.h>

int main()
{
    float length, width, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter width of rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("Perimeter of rectangle = %0.2f units ", perimeter);

    return 0;
}