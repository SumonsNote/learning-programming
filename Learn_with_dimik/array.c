#include <stdio.h>

int main()
{
    double marks[5] = {52.66, 98, 100, 67.66, 80};

    int roll;

    for(roll = 1; roll <= 5; roll++) {
        printf("Roll: %d Marks: %.2lf\n", roll, marks[roll - 1]);
    }
    return 0;
}
