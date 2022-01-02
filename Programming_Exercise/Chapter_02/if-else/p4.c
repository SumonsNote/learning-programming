#include <stdio.h>

int main()
{
    char c;

    printf("Now you are on right \n");

    printf("Input new command.\n");
    scanf("%c", &c);

    if(c == 'u') {
        printf("Go up");
    }
    if(c == 'd') {
        printf("Go down");
    }
    if(c == 'l') {
        printf("Go left");
    }
    if(c == 'r') {
        printf("Go right");
    }

    return 0;
}