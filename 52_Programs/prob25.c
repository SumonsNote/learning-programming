#include <stdio.h>

int gcd(int a, int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int T, i, a, b;
    scanf("%d", &T);
    gcd(a,b);

    while(T--)
    {
        scanf("%d %d", &a, &b);
        printf("LCM = %d", gcd(a,b));
    }

    return 0;
}