#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b) {
        printf("a is greater than b.\n");
    }
    if(a < b) {
        printf("b is greater than a.\n");
    }
    else {
        printf("They are equal.\n");
    }

    return 0;
}