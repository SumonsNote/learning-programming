#include <stdio.h>

int x;

void myfunc(int y)
{
    y = y * 2;
    x = x + 10;
    printf("myfunc, x = %d, y = %d\n", x, y);
}

int main()
{
    int y = 5;
    x = 10;

    myfunc(y);

    printf("main, x = %d, y = %d\n", x, y);

    return 0;
}