#include <stdio.h>
#include <string.h>

int main()
{
    char string1[1001], string2[1001];
    int T;

    scanf("%d", &T);
    while(T--)
    {
        scanf(" %[^\n]", string1);
        
        strcpy(string2, string1);
        strrev(string2);
        
        if(strcmp(string1, string2) == 0)
        {
            printf("Yes! It is Palindrome!\n");
        }
        else 
        {
            printf("Sorry! It is not Palindrom\n");
        }
    }

    return 0;
}