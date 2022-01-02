#include <stdio.h>

int factorial(int n)
{
    if(n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Undefined.\n");
        return 0;
    }

    printf("Factorial of %d is %d\n", n, factorial(n));

    return 0;
}