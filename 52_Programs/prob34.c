#include <stdio.h>

int main()
{
    long int T, i, A, B, C;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%ld %ld %ld", &A, &B, &C);
        for(i = 1; i <= C; i++)
        {
            if(i % A == 0 && i % B == 0)
            {
                printf("%ld\n", i);
            }
        }
        printf("\n");
    }
    return 0;
}