#include <stdio.h>

int main()
{
    int namta[10][10];
    int row, col, res1, res2, odd, even;

    res2 = 0;

    for(row = 1; row <= 10; row++) {
        res1 = 0;

        for(col = 1; col <= 10; col++) {
            res1 = res1 + row;
            namta[row - 1][col - 1] = res1;

            printf("%d * %d = %d\n", row, col, namta[row - 1][col - 1]);

            res2 = res2 + namta[row - 1][col - 1];
        }
        printf("\n");
    }

    printf("The Sum: %d\n", res2);

    return 0;
}