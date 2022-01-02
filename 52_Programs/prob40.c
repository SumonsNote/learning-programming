#include <stdio.h>

int main()
{
    int X, K, T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %d", &X, &K);
        int sum = 1, power = 1;
        for(int i = 1; i <= K; i++)
        {
            power = power * X;
            sum += power;
        }
        printf("Result = %d\n", sum);
    }

    return 0;
}