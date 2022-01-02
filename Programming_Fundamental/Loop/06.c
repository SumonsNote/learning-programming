#include <stdio.h>

int main()
{
    int row, col, n;

    printf("Enter N: ");
    scanf("%d", &n);

    for(row = 0; row < n; row++) {
        for(col = 0; col < pow(2,row); col++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
