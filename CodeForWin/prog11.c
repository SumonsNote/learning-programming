#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter tow angles of triangle: ");
    scanf("%d%d", &a, &b);

    c = 180 - (a + b);

    printf("Third angle of the Triangle = %d", c);

    return 0;
}