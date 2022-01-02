#include <stdio.h>

int main()
{
    int T, i, n;
    int num[1001];

    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }
        for(i = 0; i < n; i = i + 2)
        {
            printf("%d ", num[i]);
        }
        printf("\n");
    }

    return 0;
}