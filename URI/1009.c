#include <stdio.h>

int main()
{
    char name[30];
    float salary;
    double sale, TOTAL;
    gets(name);
    scanf("%f%lf", &salary, &sale);
    TOTAL = salary+(sale*15)/100;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}