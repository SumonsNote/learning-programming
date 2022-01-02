#include <stdio.h>

int main()
{
    int days, week=7;

    printf("Enter days: ");
    scanf("%d", &days);

    printf("Week of the days: %d\n", days / week);

    return 0;
}