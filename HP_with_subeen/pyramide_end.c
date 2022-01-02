#include <stdio.h>

int main()
{
    int i, j, row, k;
    int n = 0;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    k = row;

    for(i = 0; i < row; i++) {
        for(j = 0; j <= i; j++) {
            printf("*");
        }
        while(n != 2*k-2) {
            printf(" ");
            n++;
        }
        k = k - 1;
        for(j = 0; j <= i; j++) {
            printf("*");
        }
        n = 0;
        printf("\n");
    }
    return 0;
}
