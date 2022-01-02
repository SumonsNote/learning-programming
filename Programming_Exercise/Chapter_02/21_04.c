#include <stdio.h>

int main()
{
    int france_goal, spain_goal;
    int rain;

    printf("It's Raining? ");
    scanf("%d", &rain);

    if(1 == rain) {
        printf("Draw Game");
    }
    
    else {
        printf("France Goal: ");
        scanf("%d", &france_goal);

        printf("Spain Goal: ");
        scanf("%d", &spain_goal);

        if(france_goal < spain_goal) {
        printf("0\n");
    }
    else {
        printf("1\n");
        }
    }

    return 0;
}