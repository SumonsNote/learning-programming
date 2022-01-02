#include <stdio.h>

int main()
{
    int ajker_news[7] = {3,5,5,8,4,5,3};
    int ajker_sandha[7] = {4,8,10,12,6,3,3};
    int bangladesh_news[7] = {1,2,3,3,2,2,1};

    int ajkerNews = 0;
    int ajkerSandha = 0;
    int bangladeshNews = 0;

    int i;

    for(i = 0; i < 7; i++) {
        ajkerNews = ajkerNews + ajker_news[i];
    }
    for(i = 0; i < 7; i++) {
        ajkerSandha = ajkerSandha + ajker_sandha[i];
    }
    for(i = 0; i < 7; i++) {
        bangladeshNews = bangladeshNews + bangladesh_news[i];
    }

    printf("Copy of Ajker News = %d\n", ajkerNews);
    printf("Copy of Ajker Sandha = %d\n", ajkerSandha);
    printf("Copy of Bangladesh News = %d", bangladeshNews);

    printf("\n\n");

    int Total_money = ajkerNews * 6 + ajkerSandha * 10 + bangladeshNews * 9;
    printf("Total money = %d", Total_money);

    return 0;
}