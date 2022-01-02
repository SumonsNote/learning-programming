#include <stdio.h>

int main()
{
    int raihan_money, ice_cream, achar;

    printf("Raihan Money: ");
    scanf("%d", &raihan_money);

    if(raihan_money < 10) {
        printf("Raihan will not go to school");
    }
    else {
        printf("Has Achar seller come: ");
        scanf("%d", &achar);

        if(raihan_money >= 10 && achar == 1) {
            printf("Raihan will take achar");
        }
        else {
            printf("Raihan will take ice cream");
        }
    }
    
    return 0;
}