#include <stdio.h>

int main()
{
    int n, i, m;

    for(n = 1; n <= 20; n = n + 1) {
        i = 1, m = 0;
        while(i <= 10) {
            i = i + 1;
            m = m + n;

            printf("%d * %d = %d\n", n, i, m);
        }
    }

    return 0;
}