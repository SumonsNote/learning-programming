#include <stdio.h>

int main()
{
    int employ_number, month_hours;
    float salary;

    scanf("%d %d %f",&employ_number, &month_hours, &salary);

    salary = month_hours * salary;

    printf("NUMBER = %d\nSALARY = U$ %0.2f\n", employ_number, salary);

    return 0;
}