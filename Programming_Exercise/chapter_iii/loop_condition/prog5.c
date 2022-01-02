#include <stdio.h>

int main()
{
    int a, b, temp, i;
    scanf("%d %d", &a, &b);

    if(b > a) {
        temp = b;
        b = a;
        a = temp;
    }

    if(a % b == 0) {
        printf("%d\n", a);
    }
    else {
        for(i = a; ; i += a) {
            if(a % b == 0) {
                break;
            }
        }
        printf("%d\n", b);
    }

    return 0;
}