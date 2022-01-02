#include <stdio.h>

int main() {

    int n, rev = 0, remainder;
    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        while (n != 0) {
            remainder = n % 10;
            rev = rev * 10 + remainder;
            n /= 10;
        }
        printf("%d\n", rev);
    }
    
    return 0;
}