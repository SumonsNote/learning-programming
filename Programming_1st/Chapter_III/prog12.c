#include <stdio.h>

int main()
{
    char ch = 'k';

    if(ch >= 'a' && ch <= 'z') {
        printf("%c is a lower case\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf("%c is a upper case\n", ch);
    }

    return 0;
}