#include <stdio.h>

int main()
{
    int i, n, m;

    for(n = 1; n <= 20; n = n + 1) {
        for(i = 1, m = 0; i <= 10; i = i + 1) {
            m = m + n;
            printf("%d * %d = %d\n", n, i, m);
        }
    }

    return 0;
}