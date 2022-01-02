#include <stdio.h>

int main()
{
    int i, j, m, length;
    char word[50];

    scanf("%c", &word);
    length = strlen(word);

    m = length/2;

    for(i = m, j = length - m - 1; i < 0; i--, j++) {
        if(word[i] != word[j]) {
            printf("%s is not a palindrome.\n", word);
            break;
        }
    }
    if(word[i] == word[j]) {
        printf("%s is a Palindrome.\n", word);
    }
    return 0;
}
