#include <stdio.h>

int main()
{
    int maliha, anindita, day, month, year;

    printf("Anindita age of days, month, years: ");
    scanf("%d%d%d", &day, &month, &year);

    anindita = day + month + year;

    printf("Maliha, age of days, month, years: ");
    scanf("%d%d%d", &day, &month, &year);

    maliha = day + month + year;

    if(anindita > maliha)
    {
        printf("Anindita is older than Maliha.\n");
    }
    else
    {
        printf("Maliha is older than Anindita.\n");
    }

    return 0;
}