#include <stdio.h>

int main()
{
    int mitur_boro_bahi;

    printf("Has mitu's older brother come: ");
    scanf("%d", &mitur_boro_bahi);

    if(mitur_boro_bahi == 1) {
        printf("Mitu will buy Hilsha");
    }
    else {
        printf("Mitu will buy vesitable");
    }

    return 0;
}