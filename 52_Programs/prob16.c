#include <stdio.h>
#include <string.h>

void print_reverse(char str[])
{
    int i, j;
    for(i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

int main()
{
    int i, j, k, t, s_len;
    char S[1002], word[1002];

    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf(" %[^\n]", S);
        s_len = strlen(S);
        for(j = 0, k = 0; j < s_len; j++)
        {
            if(S[j] != ' ')
            {
                word[k] = S[j];
                k++;
            }
            else if (k > 0)
            {
                word[k] = '\0';
                print_reverse(word);
                k = 0;
            }
        }
        if(k > 0)
        {
            word[k] = '\0';
            print_reverse(word);
        }
    }
    return 0;
}