#include <stdio.h>

int main()
{
    int number[5][3], total[5] = {0};

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &number[i][j]);
            total[i] += number[i][j];
        }
    }

    for(int i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i+1, total[i]);
    }

    return 0;
}