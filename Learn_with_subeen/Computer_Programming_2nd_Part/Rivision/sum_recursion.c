#include <stdio.h>

int add_numbers(int n)
{
    if(n != 0) {
        return n + add_numbers(n - 1);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    add_numbers(n);

    printf("Sum is %d\n", add_numbers(n));

    return 0;
}