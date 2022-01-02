#include <stdio.h>
#include <math.h>

int main()
{
    float inch, cm;

    printf("Enter cm to print inch: ");
    scanf("%f", &cm);

    inch = cm * .3937;
    printf("%.f\n", inch);

    return 0;
}