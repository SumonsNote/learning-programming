#include <stdio.h>

int main()
{
    char c;
    int n;

    printf("Input a character:\n");
    scanf("%c", &c);
    printf("Input a number:\n");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("%c\n", c);
    }

    return 0;
}
