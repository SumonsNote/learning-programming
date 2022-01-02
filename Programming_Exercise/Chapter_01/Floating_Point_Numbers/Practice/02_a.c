#include <stdio.h>
#include <math.h>

int main()
{
    float x, result;

    scanf("%f", &x);
    result = pow(x, 2) - 5*x + 12;

    printf("%.2f\n", result);
    
    return 0;
}