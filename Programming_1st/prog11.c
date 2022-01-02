#include <stdio.h>

int main()
{
    double a, b, sum;

    scanf("%lf %lf", &a, &b);

    sum = a + b;

    printf("Sum is: %.02lf", sum);

    return 0;
}