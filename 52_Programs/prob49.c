#include <stdio.h>
#include <math.h>

    void find_prime_number(int prime_ara[], int n)
    {
        int i, root;
        if(n == 2)
        {
            return 1;
        }
        if(n % 2 == 0)
        {
            return 0;
        }

        root = sqrt(n);
        for(i = 3; i <= root; i = i + 2)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }

        return 1;
    }

int man()
{
    int prime_ara[1000001];
    int T, sqrt_n;
    long long int N;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%lld", &N);
        sqrt_n = sqrt(N);
        find_prime_number(prime_ara, sqrt_n);
        int is_prime = 1;
        for(int i = 0; i <= sqrt_n; i++)
        {
            if(N % prime_ara[i] == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if(1 == prime_ara)
        {
            printf("%lld is a prime\n", N);
        }
        else
        {
            printf("%lld is not a prime\n", N);
        }
    }

    return 0;
}