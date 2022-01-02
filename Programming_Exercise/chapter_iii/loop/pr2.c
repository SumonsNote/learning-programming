#include <stdio.h>

int main()
{
    int number;
    
    scanf("%d", &number);

    for(int i = 1; i <= 10; i++) {
        printf("%4d * %2d = %4d\n", number, i, number*i);
    }

    return 0;
}