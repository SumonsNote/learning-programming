#include <stdio.h>

int main()
{
    // int n, i;

    // for(n = 1; n <= 20; n = n + 1) {
    //     for(i = 1; i <= 10; i = i + 1) {
    //         printf("%d * %d = %d\n", n, i, n*i);
    //     }
    // }

    // int i, n, m;

        // for(n = 1; n <= 20; n = n + 1) {
        //     for(m = 0, i = 1; i <= 10; i = i + 1) {
        //         m = m + n;
        //         printf("%d * %d = %d\n", n, i, m;
        //     }
        // }

    // int n, i;

    // for(n = 1; n <= 20; n = n + 1) {
    //     i = 0;
    //     while(i < 10) {
    //         i = i + 1;
    //         printf("%d * %d = %d\n", n, i, n*i);
    //     }
    // }

    // int n, i, m;

    // for(n = 1; n <= 20; n = n + 1) {
    //     m = 0;
    //     i = 0;
    //     while(i < 10) {
    //         i = i + 1;
    //         m = m + n;
    //         printf("%d * %d = %d\n", n, i, m);
    //     }
    // }

    // int n, i;

    // n = 0;
    // while(n < 20) {
    //     n = n + 1;
    //     i = 0;
    //     while(i < 10) {
    //         i = i + 1;
    //         printf("%d * %d = %d\n", n, i, n*i);
    //     }
    // }

    // int n, i, m;

    // n = 0;
    // while(n < 20) {
    //     n = n + 1;
    //     m = 0;
    //     i = 0;
    //     while(i < 10) {
    //         i = i + 1;
    //         m = m + n;

    //         printf("%d * %d = %d\n", n, i, m);
    //     }
    // }

    // int n, i;

    // n = 0;
    // while(n < 20) {
    //     n = n + 1;
    //     for(i = 1; i <= 10; i = i + 1) {
    //         printf("%d * %d = %d\n", n, i, n*i);
    //     }
    // }

    int n, i, m;

    n = 0;
    while(n < 20) {
        n = n + 1;
        m = 0;
        i = 0;
        while(i < 10) {
            i = i + 1;
            m = m + n;

            printf("%d = %d = %d\n", n, i, m);
        }
    }

    return 0;
}