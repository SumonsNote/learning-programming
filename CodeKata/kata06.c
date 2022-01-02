#include <stdio.h>

void add(int n1, int n2)
{
    // addition
    printf("%d + %d = %d\n", n1, n2, n1 + n2);
}

void sub(int n1, int n2)
{
    // subtraction
    printf("%d - %d = %d\n", n1, n2, n1 - n2);
}

void mul(int n1, int n2)
{
    // multiplication
    printf("%d * %d = %d\n", n1, n2, n1 * n2);
}

void div(int n1, int n2)
{
    // division
    if(n2 == 0) {
        printf("Can not divide by zero\n");
    }
    printf("%d / %d = %d\n", n1, n2, n1 / n2);
}

int main()
{
    int n, number1, number2;

    while(1) {
        printf("Enter two numbers: (or two 0s to exit): ");
        scanf("%d %d", &number1, &number2);
        if(number1 == 0 && number2 == 0) {
            printf("Program Terminated\n");
            break;
        }
        printf("Enter \n1 for addition\n2 for subtraction\n3 for multiplicaiton\n4 for division\n: ");
        scanf("%d", &n);
        
        if(n == 1) {
            add(number1, number2);
        }
        else if(n == 2) {
            sub(number1, number2);
        }
        else if(n == 3) {
            mul(number1, number2);
        }
        else if(n == 4) {
            div(number1, number2);
        }
        else {
            printf("Unknown Operation\n");
        }
    }
    return 0;
}