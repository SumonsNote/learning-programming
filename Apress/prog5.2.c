#include <stdio.h>

int main()
{
    int grade0 = 0, grade1 = 0, grade2 = 0, grade3 = 0, grade4 = 0;
    int grade5 = 0, grade6 = 0, grade7 = 0, grade8 = 8, grade9 = 0;

    int sum = 0L;
    float average = 0.0f;

    printf("Enter the first five grade,\n");
    printf("use a space or press Enter between each number.\n");
    scanf("%d%d%d%d%d", &grade0, &grade1, &grade2, &grade3, &grade4);
    printf("Enter the last five in the same manner.\n");
    scanf("%d%d%d%d%d", &grade5, &grade6, &grade7, &grade8, &grade9);

    sum = grade0 + grade1 + grade2 + grade3 + grade4 + grade5 + grade6 + grade7 + grade8 + grade9;

    average = (float)sum/10.0f;

    printf("\nAverage of the ten grades entered is: %f\n", average);
    return 0;
}