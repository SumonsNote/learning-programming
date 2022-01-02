#include <stdio.h>
#include <math.h>

int main()
{
    double numbers[100], sum = 0, mean = 0, sqr_diff_sum = 0, sigma = 0;

    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%lf", &numbers[i]);
    }

    for(int i = 0; i < n; i++) {
        sum = sum + numbers[i];
    }

    mean = sum / n;
    printf("Mean: %g\n", mean);


    for(int i = 0; i < n; i++) {
        double difference = mean - numbers[i];
        sqr_diff_sum += difference * difference;
    }

    sigma = sqrt(sqr_diff_sum / n);
    printf("Standard Deviation: %g\n", sigma);

    return 0;
}