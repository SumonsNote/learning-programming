#include <stdio.h>

int find_max(int ara[], int n);

int main()
{
    int ara[] = {
        100, 45, 22, -100, 46, 89, 78, 50, 1, -0
    };
    int n = 10;

    int max = find_max(ara, n);
    printf("%d\n", max);

    return 0;
}

int find_max(int ara[], int n)
{
    int max = ara[0];
    int i;

    for(i = 1; i < n; i++) {
        if(ara[i] > max) {
            max = ara[i];
        }
    }

    return max;
}