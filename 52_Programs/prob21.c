#include <stdio.h>
#include <string.h>

int main()
{
    char S[1000];
    int i, T, len;
    scanf("%d", &T);

    while(T--)
    {
        scanf(" %[^\n]", S);
        len = strlen(S);
        for(i = len; i >= 0; i--)
        {
            printf("%c", S[i]);
        }
        printf("\n");
    }
    return 0;
}