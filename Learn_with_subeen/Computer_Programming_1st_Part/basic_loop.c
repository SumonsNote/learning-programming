#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < j + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}