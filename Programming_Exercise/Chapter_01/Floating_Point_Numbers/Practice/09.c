#include <stdio.h>

int main()
{
    float age1, age2, age3, age4, age5, age6, age7, age8, age9, age10, avg_age;

    scanf("%f", &age1);
    scanf("%f", &age2);
    scanf("%f", &age3);
    scanf("%f", &age4);
    scanf("%f", &age5);
    scanf("%f", &age6);
    scanf("%f", &age7);
    scanf("%f", &age8);
    scanf("%f", &age9);
    scanf("%f", &age10);

    float total = age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10;

    avg_age = total / 10;

    printf("%f", avg_age);

    return 0;
}