#include <stdio.h>

int main()
{
    int x, y, seed, a;

    printf("Fish Number: ");
    scanf("%d", &x);

    printf("Food Number: ");
    scanf("%d", &y);

    x = x * 3;

    if(y >= x) {
        printf("I can feed.\n");
    }
    else {
        printf("I can't feed.\n");
    }
    
    return 0;
}