#include <stdio.h>
#include <string.h>

int main()
{
    int T, i;
    char S[1000];
    scanf("%d", &T);

    while(T--)
    {
        scanf(" %[^\n]", S);
        int len = strlen(S);
        int vowel = 0;

        for(i = 0; S[i] != '\0'; i++)
        {
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
            {
                vowel++;
            }
        }

        printf("Number of vowels = %d\n", vowel);
    }

    return 0;
}