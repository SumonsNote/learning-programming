#include <stdio.h>

char char_to_digit(char ch)
{
    if(ch >= '0' && ch <= '9') {
        printf("1");
    } else {
        printf("0");
    }
}

int main()
{

    char ch, fnc;

    scanf("%c", &ch);
    fnc = char_to_digit(ch);

    return 0;