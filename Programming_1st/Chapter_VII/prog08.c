#include <stdio.h>

int find_sum(int ara[], int n);

int main()
{
    int ara[] = {
        12,45,89,56,45,78,23,56,89,455
    };
    int n = 10;

    int sum = find_sum(ara, n);
    printf("%d\n", sum);

    return 0;
}

int find_sum(int ara[], int n)
{
    int sum = 0;
    int i;

    for(i = 0; i < n; i++) {
        sum = sum + ara[i];
    }

    return sum;
}