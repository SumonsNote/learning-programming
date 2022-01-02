#include <stdio.h>
#include <math.h>

int main()
{
    // float x, result;

    // scanf("%f", &x);
    // result = x*x*x*x*x - 3*x*x*x*x - 7*x*x*x + 13*x*x + 3742;

    // printf("%.2f\n", result);

    // Alternative way

    float x, result;

    scanf("%f", &x);
    result = pow(x, 5) - 3*pow(x, 4) - 7*pow(x, 3) + 13*pow(x, 2) + 3742;

    printf("%.2f\n", result);

    return 0;
}