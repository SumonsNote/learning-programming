#include <stdio.h>
#include <string.h>

void decrypt(char msg[])
{
    int i, n;

    n = strlen(msg);

    for(i = 0; i < n; i++) {
        if(msg[i] >= 'a' && msg[i] <= 'z' || msg[i] >= 'A' && msg[i] <= 'Z') {
            msg[i] = (msg[i] - 1);
        }
    }
}

int main()
{
    char s[80];

    gets(s);

    decrypt(s);

    printf("%s\n", s);

    return 0;
}