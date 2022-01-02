#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, m, len;
    char word[50];

    scanf("%s", &word);

    len = strlen(word);

    m = len / 2;

    for(i = m, j = len - m - 1; i > 0; i--, j++) {
        if(word[i] != word[j]) {
            printf("It's not a palindrome.\n");
            break;
        }
    }
    if(word[i] == word[j]) {
        printf("%s is a palindrome.\n", word);
    }
    else {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}