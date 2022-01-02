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
        int count = 0;
        for(i = 0; S[i] != '\0'; i++)
        {
            if(S[i] == ' ')
            {
                count++;
            }
        }

        printf("Count = %d\n", count+1);
    }

    return 0;
}