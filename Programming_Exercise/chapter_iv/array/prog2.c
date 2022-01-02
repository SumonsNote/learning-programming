#include <stdio.h>
#include <math.h>

int main()
{
    int numbers[10], difference_sum = 0;
    double avg = 0;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < 9; i++)
    {
        int difference = abs(numbers[i] - numbers[i+1]);
        printf("%d ", difference);
        difference_sum = difference_sum + difference;
    }
    printf("\n");

    avg = (double) difference_sum / 9;
    printf("Average of difference: %g\n", avg);

    return 0;
}