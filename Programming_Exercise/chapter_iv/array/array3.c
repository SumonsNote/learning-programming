#include <stdio.h>

int main()
{
    int number[5][3], total[3] = {0};

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &number[i][j]);
        }
    }

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 3; j++) {
            total[j] = total[j] + number[i][j];
        }
    }

    printf("Bangla: %g\n", (double)total[0] / 5);
    printf("English: %g\n", (double)total[1] / 5);
    printf("Math: %g\n", (double)total[2] / 5);

    return 0;
}