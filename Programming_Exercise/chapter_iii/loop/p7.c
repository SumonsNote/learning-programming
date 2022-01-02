#include <stdio.h>

int main()
{
    int i, n, remainder;
    
    while(n != 0) {
        scanf("%d", &n);
        remainder = n % 6;
        printf("%d\n", remainder);
    }

    return 0;
}