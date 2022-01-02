#include <stdio.h>

int main()
{
    double feet, meter;

    printf("Enter meter: ");
    scanf("%lf", &meter);

    feet = meter * 3.2808;

    printf("Feet: %.2lf", feet);
    return 0;
}