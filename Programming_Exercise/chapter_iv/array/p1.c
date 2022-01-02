#include <stdio.h>

int main()
{
    int n[10];
    for(int i = 1; i <= 10; i++) {
        scanf("%d", &n[i]);
    }
    for(int i = 10; i >= 1; i--) {
        printf("%d\n", n[i]);
    }
    return 0;
}