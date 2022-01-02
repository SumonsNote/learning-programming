#include <stdio.h>

int main()
{
    int i, n, j = 1;

    scanf("%d", &n);

    if(n == 1) {
        printf("It's factorical.\n");
    }
    else if(n == 0) {
        printf("It's not a factorial.\n");
    }

    for(i = 1; i <= n; i++) {
        j *= i;
    }
    printf("%d", j);

    return 0;
}