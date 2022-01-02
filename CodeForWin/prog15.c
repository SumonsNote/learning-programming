#include <stdio.h>

int main()
{
    float principle, time, rate, SI;

    printf("Enter Priciple: ");
    scanf("%f", &principle);

    printf("Enter Time: ");
    scanf("%f", &time);

    printf("Enter Rate: ");
    scanf("%f", &rate);

    SI = (principle * time * rate) / 100;

    printf("Simple Interest = %.2f", SI);

    return 0;
}