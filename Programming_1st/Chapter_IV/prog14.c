#include <stdio.h>

int main()
{
    int n, i, m;

    n = 0;
    while(n < 20) {
        n = n + 1;

        for(i = 1, m = 0; i <= 10; i = i + 1) {
            m = m + n;
            printf("%d * %d = %d\n", n, i, m);
        }
    }
    
    return 0;
}