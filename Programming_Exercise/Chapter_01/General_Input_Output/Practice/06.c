#include <stdio.h>

int main()
{
    int bought_egg, broken_egg;
    
    printf("How many eggs you bought: ");
    scanf("%d", &bought_egg);

    printf("Broken Eggs: ");
    scanf("%d", &broken_egg);

    printf("Total remaining eggs: %d\n", bought_egg - broken_egg);

    return 0;
}