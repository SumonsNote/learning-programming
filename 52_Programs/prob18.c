#include <stdio.h>
#include <string.h>

int main()
{
    int T, i;
    char S[10001];

    scanf("%d", &T);
    while(T--)
    {
        scanf(" %[^\n]", S);

        for(i = 0; S[i] != '\0'; i++)
        {
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            {
                printf("%c", S[i]);
            }
        }

        printf("\n");

        for(i = 0; S[i] != '\0'; i++)
        {
            if(S[i] != 'a' && S[i] != 'e' && S[i] != 'i' && S[i] != 'o' && S[i] != 'u' && S[i] != ' ')
            {
                printf("%c", S[i]);
            }
        }
    }

    return 0;
}