#include <stdio.h>

int main()
{
    char ch = 'A';

    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("Vowel\n", ch);
    }
    else {
        printf("Consonant\n", ch);
    }
    return 0;
}