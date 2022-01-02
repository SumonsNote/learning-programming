#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);

    double area = a * a;

    printf("%.2lf", area);

    return 0;
}