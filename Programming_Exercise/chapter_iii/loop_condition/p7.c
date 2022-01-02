#include <stdio.h>

int main()
{
    char c[100];
    int n, i, low_count = 0, number_count = 0, l, num;

    scanf("%d", &n);

    for(i = 0; i <= n; i++) {
        scanf("%c", &c);

        if(c[i] >= 'a' && c[i] <= 'z') {
            low_count++;
        }
        if(c[i] >= '0' && c[i] <= '9') {
            number_count++;
        }
    }

    printf("%d %d", low_count, number_count);
    return 0;
}