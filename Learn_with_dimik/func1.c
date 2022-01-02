#include <stdio.h>

int square(int x)
{
    int a;
    a = x * x;

    return a;
}

int main()
{
    int y, r;

    scanf("%d", &y);

    r = square(y);

    printf("The square of %d is: %d\n", y, r);
    return 0;
}
