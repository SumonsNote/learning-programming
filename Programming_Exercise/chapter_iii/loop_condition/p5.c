#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, n;

    scanf("%s", s);

    n = strlen(s);

    for(i = 0; i <= n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] + 2);
        }
    }
    printf("%s\n", s);
    return 0;
}