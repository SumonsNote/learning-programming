#include <stdio.h>

int main()
{
    int n, even, odd;
    while(1) {
        scanf("%d", &n);
    if(n % 2 == 0) {
        even = n / 2;
        printf("%d\n", even);
        if(even == 1) {
            break;
        }
    }
    else if(n % 2 == 1) {
        odd = n * 3 + 1;
        printf("%d\n", odd);
        if(odd == 1) {
            break;
            }
        }
    }
    return 0;
}