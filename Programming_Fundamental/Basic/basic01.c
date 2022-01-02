#include <stdio.h>

int main()
{
    int num1, num2;
    int sum, sub, mod, mult;
    float div;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mod = num1 % num2;
    mult = num1 * num2;
    div = (float) num1 / num2;

    printf("SUM = %d\n", sum);
    printf("SUB = %d\n", sub);
    printf("MOD = %d\n", mod);
    printf("MULT = %d\n", mult);
    printf("DIV = %f\n", div);

    return 0;
}
