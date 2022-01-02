#include <stdio.h>

int find_avg(int ara[], int n);

int main()
{
    int ara[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    };
    int n = 10;

    int avg = find_avg(ara, n);
    printf("%d\n", avg);

    return 0;
}

int find_avg(int ara[], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++) {
        sum = sum + ara[i];
    }
    int avg = sum / n;

    return avg;
}