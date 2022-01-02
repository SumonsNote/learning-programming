#include <stdio.h>

int x = 1;

void myfnc(int y)
{
    y = y * 5;
    x = x + 20;
    printf("myfnc, x = %d, y = %d\n", x, y);
}

int main()
{
    int y = 15;
    x = 100;

    myfnc(y);

    printf("main, x = %d, y = %d\n", x, y);

    return 0;
}