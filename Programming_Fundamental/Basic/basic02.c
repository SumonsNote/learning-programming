#include <stdio.h>

int main()
{
    float length, width, perimeter;

    printf("Enter Length: ");
    scanf("%f", &length);

    printf("Enter Width: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);

    printf("Perimeter of Rectangle is: %f", perimeter);

    return 0;
}
