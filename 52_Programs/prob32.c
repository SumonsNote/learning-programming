#include <stdio.h>

int main()
{
    int T, N, X, i, j;
    scanf("%d", &T);

    for(i = 0; i < T; i++)
    {
        scanf("%d %d", &X, &N);
        for(j = X; j <= N; j += X)
        {
            printf("%d\n", j);
        }
        printf("\n");
        if(X > N)
        {
            printf("Invalid!\n");
        }
    }
    return 0;
}