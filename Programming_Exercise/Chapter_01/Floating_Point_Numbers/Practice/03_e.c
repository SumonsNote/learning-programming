#include <stdio.h>

int main()
{
    double pound, kg;

    printf("Enter Pound: ");
    scanf("%lf", &pound);

    kg = pound / 2.2046;

    printf("Kilogram: %.5lf", kg);
    return 0;
}