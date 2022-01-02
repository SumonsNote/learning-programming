#include <stdio.h>

int main()
{
    int T, i;
    scanf("%d", &T);

    int m;
    for(m = 1; m <= T; m++) {
        int N;
        scanf("%d", &N);

        int i, j;
        for(i = 1; i <= N; i++) {
            for(j = 1; j <= N; j++) {
                printf("*");
            }
            printf("\n");
        }
        if(m != T - 1) {
            printf("\n");
        }
    }
    return 0;
}