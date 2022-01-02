#include <stdio.h>

int main()
{
    int i, j, n = 0, row, k;

    scanf("%d", &row);

    k = row;

    for(i = 0; i < row; i++) {
        for(j = 0; j <= i; j++) {
            printf("C");
        }

        while(n != 2 * k - 2) {
            printf(" ");
            n++;
        }

        k = k - 1;
        for(j = 0; j <= i; j++) {
            printf("C");
        }
        n = 0;
        printf("\n");
    }

    return 0;
}