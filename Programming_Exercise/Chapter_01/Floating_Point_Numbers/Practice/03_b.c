#include <stdio.h>
#include <math.h>

int main()
{
    float cm, inch;

    printf("Enter inch to print cm: ");
    scanf("%f", &inch);

    cm = inch * 2.54;

    printf("%f\n", cm);
    return 0;
}