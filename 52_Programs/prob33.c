#include <stdio.h>

int main()
{
    int T, A, B, C, i;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d %d", &A, &B, &C);
        for(i = A; i <= B; i++)
        {
            if(i % C == 0)
            {
                printf("%d\n", i);
            }
        }
        printf("\n");
    }
    return 0;
}