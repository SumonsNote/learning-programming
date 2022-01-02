#include <stdio.h>

int main()
{
    int T, count;
    double X;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%lf", &X);
        count = 0;
        while(X > 1.00)
        {
            X = X / 2.00;
            count++;
        }
        printf("days %d\n", count);
    }

    return 0;
}