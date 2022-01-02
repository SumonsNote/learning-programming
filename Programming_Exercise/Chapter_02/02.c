#include <stdio.h>

int main()
{
    int cut_grass, catch_fish, buy_saree;

    scanf("%d%d", &cut_grass, &catch_fish);

    buy_saree = cut_grass && catch_fish;

    printf("Buy Saree: %d\n", buy_saree);

    return 0;
}