#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n % 2 == 0) {
        printf("The the number is even");
    }
    else {
        printf("The number is odd");
    }

    return 0;
}