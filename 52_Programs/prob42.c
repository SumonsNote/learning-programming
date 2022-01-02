#include <stdio.h>

int main()
{
    int T, N;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        for(int k = N; k > 0; k--)
        {
            if (k == 0) printf("1\n");
            else if(k == 1) printf("2 + 1\n");
            else printf("2^%d + ", k);
        }
    }
    return 0;
}