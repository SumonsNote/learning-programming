#include <stdio.h>
#include <string.h>

int main()
{
    int T, i, count;
    char S[10000];
    char* word;

    scanf("%d", &T);
    for(i = 0; i < T; i++)
    {
        scanf(" %[^\n]", S);
        word = strtok(S, "!,;?. ");
        count = 0;
        while(word != NULL)
        {
            if(strlen(word) > 0)
            {
                count++;
            }
            word = strtok(NULL, "!,;.?. ");
        }
        printf("Count = %d\n", count);
    }

    return 0;
}