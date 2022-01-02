#include <stdio.h>

int main()
{
    float eng, math, phy, chem, his;
    float total, avg, percentage;

    printf("Enter marks of five subjects: \n");
    scanf("%f %f %f %f %f", &eng, &math, &phy, &chem, &his);

    total = eng + math + phy + chem + his;
    avg = total / 5;
    percentage = (total / 500.0) * 100;

    printf("Total = %.2f\n", total);
    printf("Average = %.2f\n", avg);
    printf("Percentage = %.2f\n", percentage);

    return 0;
}