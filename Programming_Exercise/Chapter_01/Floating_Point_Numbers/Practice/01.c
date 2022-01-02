#include <stdio.h>

int main()
{
    float total_apple, avg_apple;

    printf("Enter apple: ");
    scanf("%f", &total_apple);

    printf("Weight of an apple: ");
    scanf("%f", &avg_apple);

    printf("KM of total apples: %.2fgm\n", total_apple * avg_apple);

    return 0;
}