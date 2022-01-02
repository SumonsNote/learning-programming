#include <stdio.h>
#include <math.h>

int main()
{
    float principle, rate, time, CI;

    printf("Enter Principle: ");
    scanf("%f", &principle);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    printf("Enter Time: ");
    scanf("%f", &time);

    CI = principle * (pow((1 + rate / 100), time));

    printf("Compound Interest = %.2f", CI);

    return 0;
}