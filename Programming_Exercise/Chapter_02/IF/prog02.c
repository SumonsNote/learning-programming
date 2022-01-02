#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    if(a % 3 == 0) {
        printf("It's a multiple of 3\n");
    }
    if(a % 5 == 0) {
        printf("It's a multiple of 5\n");
    }

    return 0;
}