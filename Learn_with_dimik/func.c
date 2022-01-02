#include <stdio.h>
int min(int a, int b)
{
    int temp;

    if(a < b) {
        temp = a;
    }
    else {
        temp = b;
    }
    return temp;
    }

int main()
{
    int a, b, c, smaller;
    int t1;
    scanf("%d %d %d", &a, &b, &c);

    smaller = min(a, b);

    t1 = min(smaller, c);

    printf("The smaller number is: %d\n", t1);

    return 0;
}
