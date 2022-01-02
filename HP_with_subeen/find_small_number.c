#include <stdio.h>

int find_small(int ara[], int n);

int main()
{
    int ara[] = {
        10, 45, 200, 100, -500, 22, 0, 1, 55, -1000
    };
    int n = 10;

    int small = find_small(ara, n);
    printf("%d\n", small);
    return 0;
}

int find_small(int ara[], int n)
{
    int small = ara[0];
    int i;

    for(i = 1; i < n; i++) {
        if(ara[i] < small) {
            small = ara[i];
        }
    }

    return small;
}