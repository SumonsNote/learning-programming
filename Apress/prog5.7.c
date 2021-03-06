#include <stdio.h>

int main()
{
    size_t nGrades = 0;
    printf("Enter the number of grades :");
    scanf("%d", &nGrades);
    int grades[nGrades];
    long sum = 0L;
    float average = 0.0f;

    printf("\nEnter the %zu grades:\n", nGrades);

    for(size_t i = 0; i < nGrades; i++)
    {
        printf("%2zd> ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    printf("The grades you entered are:\n");
    for(size_t i = 0; i < nGrades; i++)
    {
        printf("Grade[%2zd] = %d ", i + 1, grades[i]);

        if((i + 1) % 5 == 0)
            printf("\n");
    }

    average = (float)sum / nGrades;

    printf("\nAverage of the %zd grades entered is: %.2f\n", nGrades, average);

    return 0;
}