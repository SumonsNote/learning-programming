#include <stdio.h>

int main()
{
    int week, drama = 3;

    printf("Enter number of weeks: ");
    scanf("%d", &week);

    printf("Total drama of the weeks: %d\n", week * drama);

    return 0;
}