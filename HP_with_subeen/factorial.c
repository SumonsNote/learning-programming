#include <stdio.h>

int main()
{
    int i, n;
    int fact = 1;

    printf("Enter Positive Number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    printf("%d\n", fact);
    return 0;
}
