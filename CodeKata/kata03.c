#include <stdio.h>

int main()
{
    int number1, number2;
    
    scanf("%d %d", &number1, &number2);

    // Addition
    printf("%d + %d = %d\n", number1, number2, number1 + number2);
    // Subtraction
    printf("%d - %d = %d\n", number1, number2, number1 - number2);
    // Multiplication
    printf("%d * %d = %d\n", number1, number2, number1 * number2);
    // Division
    printf("%d / %d = %d\n", number1, number2, number1 / number2);
    
    return 0;
}