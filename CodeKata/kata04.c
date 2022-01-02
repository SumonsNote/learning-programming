#include <stdio.h>

void math_operations(int n1, int n2)
{
    // Addition
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
    // Subtraction
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
    // Multiplication
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
    // Division
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
}

int main()
{
    int number1, number2;

    scanf("%d %d", &number1, &number2);

    math_operations(number1, number2);

    return 0;
}