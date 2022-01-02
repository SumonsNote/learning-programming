#include <stdio.h>

int main()
{
    int a, b, x, lcm;

    scanf("%d %d", &a, &b);

    if(a > b) {
        x = a;
    }
    else {
        x = b;
    }

    for(; x >= 1; x++) {
        if(x % a == 0 && x % b == 0) {
            lcm = x;
            break;
        }
    }

    printf("LCM is %d\n", lcm);

    return 0;
}