#include <stdio.h>

int main()
{
    int T, i, N, count = 0;

        scanf("%d", &N);
        for(int i = 5; N / i >= 1; i = i * 5)
        {
            count += N / i;
        }
        printf("%d\n", count);
    return 0;
}