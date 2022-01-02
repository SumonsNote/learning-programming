#include <stdio.h>

int main()
{
    char ch = 'W';

    if(ch >= 'a' && ch <= 'z') {
        printf("%c is lower case\n", ch);
    }
    if(ch >= 'A' && ch <= 'Z') {
        printf("%c is a upper case\n", ch);
    }

    return 0;
}