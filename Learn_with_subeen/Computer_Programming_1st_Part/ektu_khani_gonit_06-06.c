#include <stdio.h>

int main()
{
    double farenheit, celsius;

    printf("Enter the temperature in farenheit: ");
    scanf("%lf", &farenheit);

    celsius = 1.8 * farenheit - 32;

    printf("Temperature in farenheit is: %lf\n", celsius);
    return 0;
}
