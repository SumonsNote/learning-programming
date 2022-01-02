#include <stdio.h>

int main()
{
    int n;
    
    while(1) {
        scanf("%d", &n);
        if(n == 0) {
            printf("Program Terminated.\n");
            break;
        }
        else if(n % 6 == 0) {
            printf("%d is divisible.\n", n);
        }
    }
    return 0;
}