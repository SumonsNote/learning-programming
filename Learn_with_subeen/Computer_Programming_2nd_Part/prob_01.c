#include <stdio.h>

char digit_check(char dgt)
{
    if(dgt >= '0' && dgt <= '9') {
        printf("1");
    }
    else 
    {
        printf("0");
    }
}
int main()
{
    char digit, dgt;
    scanf("%c", &dgt);
    
    digit = digit_check(dgt);
    return 0;
}