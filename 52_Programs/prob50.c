#include <stdio.h>
#include <string.h>

int main()
{
    int T, len, i;
    char ara[50];

    scanf("%d", &T);

    while(T--)
    {
        scanf("%s", ara);

        len = strlen(ara);

        for(i = 0; i <= len; i++)
        {
            if(ara[i] == 'L') ara[i] = ara[i - 1];
            if(ara[i] == 'R') ara[i] = ara[i + 1];
        }

        printf("%s\n", ara);
    }
    return 0;
}