#include <stdio.h>
#include <math.h>

int main()
{
    double x = 3, result;

    result = log2(x*x*x + 3*x - 1);

    printf("%.2lf\n", result);
    return 0;
}