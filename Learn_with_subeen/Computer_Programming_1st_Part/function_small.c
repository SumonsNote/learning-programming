#include <stdio.h>

int find_min(int ara[], int n);

int main()
{
    int ara[] = {-100, 56, 2, -600, -90, 23, 89, 100, -1000, 73, 330};
    int n = 11;

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
