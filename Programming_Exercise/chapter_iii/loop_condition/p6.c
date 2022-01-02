#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, n, m;

    scanf("%s", s);
    scanf("%d", &m);
    
    n = strlen(s);

    for(i = 0; i <= n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = (s[i] + m);
        }
    }
    printf("%s\n", s);

    return 0;
}