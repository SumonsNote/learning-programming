#include <stdio.h>

int main()
{
    char chr;

    scanf("%c", &chr);

    if(chr == 'a' || chr == 'A' || chr == 'e' || chr == 'E' || chr == 'i' || chr == 'I' ||    chr == 'o'|| chr == 'O' || chr == 'u' || chr == 'U') {
        printf("Vowel\n");
    }
    else {
        printf("Consonant\n");
    }
    return 0;
}
