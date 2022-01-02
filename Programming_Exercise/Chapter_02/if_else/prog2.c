#include <stdio.h>

int main()
{
    double a, b;

    scanf("%lf %lf", &a, &b);

    if(a > b) {
        printf("%g\n", a);
    }
    else {
        printf("%g\n", b);
    }

    return 0;
}