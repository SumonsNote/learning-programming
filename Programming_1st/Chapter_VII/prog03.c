#include <stdio.h>

double add(double a, double b);

int main()
{
    double a = 2.8, b = 2.7, c;

    c = add(a, b);
    printf("%lf\n", c);
}

double add(double n1, double n2)
{
    double sum = n1 + n2;

    return sum;
}