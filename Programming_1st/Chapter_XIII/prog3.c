#include <stdio.h>

int main()
{
    int i, j, n;

    scanf("%d", &n);

    for(i = n; i >= 1; i--) {
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("C");
        }
        printf("\n");
    }

    for(i = 2; i <= n; i++) {
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("C");
        }
        printf("\n");
    }

    return 0;
}