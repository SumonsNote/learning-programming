#include <stdio.h>
#include <string.h>

int main()
{
    char S[100];
    int T, i;
    scanf("%d", &T);

    while(T--)
    {
        scanf(" %[^\n]", S);
        for(i = 0; S[i] != '\0'; i++)
        {
            if(S[i] >= 'A' && S[i] <= 'Z')
            {
                printf("%d", S[i] - 64);
            }
        }
    }

    return 0;
}