#include <stdio.h>

int main()
{
    int ara[100001];
    int i, N, num, missing;

    scanf("%d", &N);

    for(i = 1; i <= N; i++) ara[i] = 0;

    for(i = 0; i < N; i++)
    {
        scanf("%d", &num);
        ara[num] = 1;
    }

    for(i = 1; i <= N; i++)
    {
        if(ara[i] == 0)
        {
            missing = i;
            break;
        }
    }

    printf("Missing number: %d\n", missing);

    return 0;
}