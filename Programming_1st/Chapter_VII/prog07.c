#include <stdio.h>

int find_min(int ara[], int n);

int main()
{
    int ara[] = {
        100, 45, 20, 0, -100, 5, 2, 4, 2, -9
    };
    int n = 10;

    int min = find_min(ara, n);
    printf("%d\n", min);
    
    return 0;
}

int find_min(int ara[], int n)
{
    int min = ara[0];
    int i;

    for(i = 1; i < n; i++) {
        if(ara[i] < min) {
            min = ara[i];
        }
    }

    return min;
}