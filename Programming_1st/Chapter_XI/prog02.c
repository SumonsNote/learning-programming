#include <stdio.h>

int main()
{
    int namta[10][10];
    int row, col;

    for(row = 1; row <= 10; row++) {
        for(col = 1; col <= 10; col++) {
            namta[row][col] = (row) * (col);
        }
    }

    for(row = 1; row <= 10; row++) {
        for(col = 1; col <= 10; col++) {
            printf("%d * %d = %d\n", (row), (col), namta[row][col]);
        }
        printf("\n");
    }

    return 0;
}