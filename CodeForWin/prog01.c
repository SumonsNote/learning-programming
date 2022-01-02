#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, sub, mult, mod;
    double div;

    printf("Enter any two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = num1+num2;
    sub = num1-num2;
    mult = num1*num2;
    mod = num1 % num2;
    div = (float)num1/num2;

    printf("SUM => %4d\n", sum);
    printf("SUB => %4d\n", sub);
    printf("MULT => %4d\n", mult);
    printf("MOD => %4d\n", mod);
    printf("DIV => %.2lf\n", div);

    return 0;
}