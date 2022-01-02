#include <stdio.h>
#include <string.h>

int main()
{
    char S[10000][10000], name[100][100], temp[100];
    int T, N, i, j;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &N);
        for(i = 0; i < N; i++)
        {
            scanf("%s\n", S[i]);
            strcpy(name[i], S[i]);
        }
        for(i = 0; i < N; i++)
        {
            for(j = i + 1; j < N; j++)
            {
                if(strcmp(S[i], S[j]) > 0)
                {
                    strcpy(temp, S[i]);
                    strcpy(S[i], S[j]);
                    strcpy(S[i], temp);
                }
            }
        }
        for(i = 0; i < N; i++)
        {
            printf("%s\n", S[i]);
        }
    }

    return 0;
}