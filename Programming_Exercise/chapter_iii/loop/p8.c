#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    for(i = 1; i <= 10; i++) {
        scanf("%d", &n);
        sum = sum + n;
    }
    printf("%d", sum);

    return 0;
}