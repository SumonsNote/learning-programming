#include <stdio.h>

int main()
{
    int n, sum, start, diff, end;

    scanf("%d %d %d", &start, &diff, &end);

    for(n = start; n >= end; n = n - diff) {
        start = start - diff;
    }
    printf("Sum is:%d\n", sum);

    return 0;
}
