#include <stdio.h>

int main()
{
    char c;
    
    printf("Enter a chracter: ");
    scanf("%c", &c);

    printf("ASCII value of %c is: %d", c, c);
    return 0;
}