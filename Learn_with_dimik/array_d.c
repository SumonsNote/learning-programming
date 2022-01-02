#include <stdio.h>

int main()
{
    double maths[2][5];

    int c, r;

    for(c = 0; c < 2; c++) {
        for(r = 0; r < 5; r++) {
            scanf("%lf", &maths[c][r]);
        }
    }

    for(c = 0; c < 2; c++) {
        for(r = 0; r < 5; c++) {
            printf("Class %d Roll %d Marks:%2.lf\n", c + 5, r + 1, maths[c][r]);
        }
    }
    return 0;
}
