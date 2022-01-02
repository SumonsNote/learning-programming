#include <stdio.h>

int main()
{
    double celsius, farenheit;

    printf("Enter temperature in farenheit: ");
    scanf("%lf", &farenheit);

    celsius = (farenheit - 32) * 5/9;

    printf("Temperature in Celsius: %.2lf\n", celsius);

    return 0;
}