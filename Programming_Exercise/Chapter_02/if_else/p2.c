#include <stdio.h>

int main()
{
    double a;
    int b;

    printf("Enter cm :");
    scanf("%lf", &a);

    printf("Enter inch: ");
    scanf("%d", &b);

    b = b * 2.54;

    if(a > b) {
        printf("Area of cirle a is bigger");
    }
    else {
        printf("Area of circle b is bigger");
    }

    return 0;
}