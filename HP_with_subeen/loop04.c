#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N: ");
    scanf("%d", &n);

    for(row = 1; row <= n; row++) {
        for(col = 1; col <= n*2; col++) {
            if(row < col) {
                printf(" ");
            }
            else {
                printf("*");
            }
            if(row <= (2*n) - col) {
                printf(" ");
            }
            else {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
