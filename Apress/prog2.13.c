#include <stdio.h>

int main(void)
{
    const float Revenue_Per_150 = 4.5f;
    short JanSold = 23500;
    short FebSold = 19300;
    short MarSold = 21600;
    float RevQuarter = 0.0f;

    unsigned long QuarterSold = JanSold + FebSold + MarSold;

    printf("Stock sold in \n Jan: %d\n Feb: %d\n Mar: %d\n", JanSold, FebSold, MarSold);
    printf("Total stock sold in first quarter: %ld\n", QuarterSold);

    RevQuarter = QuarterSold/150*Revenue_Per_150;
    printf("Sales revenue this quarter is:$%.2f\n", RevQuarter);

    return 0;
}