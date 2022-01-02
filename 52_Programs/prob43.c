#include <stdio.h>

int main()
{
    int p, q, c, T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &p, &q, &c);
        int temp = 1;
        for(int j = 1; j <= q; j++)
        {
            temp = (temp * p) % c;
        }
        int res = temp % c;
        printf("Result = %d\n", res);
    }
    return 0;
}