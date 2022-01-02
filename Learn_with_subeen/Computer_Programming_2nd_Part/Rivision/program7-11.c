#include <stdio.h>
#include <stdlib.h>

int comparefunc (const void * a, const void * b)
{
    return (*(int*)a - *(int*)b);
}

int main()
{
    int i, n=5;
    int value[] = {65, 6, 1, 100, 250};

    qsort(value, 5, sizeof(int), comparefunc);

    for(i = 0; i < n; i++) {
        printf("%d ", value[i]);
    }

    printf("\n");

    return 0;
}