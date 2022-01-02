#include <stdio.h>

long long int fact(long long int n)
{
    long long int i, product = 1;
    for(i = 1; i <= n; i++)
    {
        product *= i;
    }
    return product;
}

int main()
{
    int T;
    long long int n;
    scanf("%d", &T);
    for(int i = 0; i < T; i++)
    {
        scanf("%lld", &n);
        for(long long int i = 1; i <= n; i++)
        {
            double sum = 0.0;
            for(i = 0; i <= n; i++)
            {
                sum += ( (double)i / fact(i) );
            }
            printf("%0.4lf\n", sum);
        }
    }

    return 0;
}