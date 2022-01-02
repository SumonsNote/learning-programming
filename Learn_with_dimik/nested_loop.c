#include <stdio.h>

int main()
{
    int i, j;

    i = 0;
    while(i < 5) {
        j = 0;
        while(j < i + 1) {
            printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
