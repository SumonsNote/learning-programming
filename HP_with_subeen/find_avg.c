#include <stdio.h>

int total_sum(int ara[]);

int main()
{

    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int my_sum = total_sum(ara);
    printf("%d\n", my_sum);
    return 0;
}

int total_sum(int ara[])
{
    int i, sum = 0, sum_avg;

    for(i = 0; i < 10; i++) {
        sum = sum + ara[i];
        sum_avg = sum / 2;
    }

    return sum_avg;
}