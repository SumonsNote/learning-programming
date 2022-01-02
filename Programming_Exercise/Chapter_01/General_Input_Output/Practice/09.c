#include <stdio.h>

int main()
{
    int total_appel;
    float avg_weight_of_an_apple;
    
    printf("Total Apple: ");
    scanf("%d", &total_appel);

    printf("Weight of an apple: ");
    scanf("%f", &avg_weight_of_an_apple);

    float km_apple = total_appel * avg_weight_of_an_apple;

    printf("Total Kilogram of the apples: %.2f\n", km_apple);

    return 0;
}