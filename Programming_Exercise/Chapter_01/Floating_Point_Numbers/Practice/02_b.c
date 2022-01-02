#include <stdio.h>
#include <math.h>

int main()
{
    double x = 4.00, result;

    result = exp(x);

    printf("Exponential of %.2lf\n", x, result);

    return 0;
}