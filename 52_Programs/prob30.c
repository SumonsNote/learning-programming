#include <stdio.h>

int main()
{
    int T, N, i;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &N);
        unsigned long int sum = 0;
        for(i = 1; i < N; i++)
        {
            if(N % i == 0)
            {
                sum += i;
            }
        }
        if(N == sum)
        {
            printf("YES, %d is a perfect number!\n", N);
        }
        else 
        {
            printf("NO, %d is not a perfect number!\n", N);
        }
    }

    return 0;
}