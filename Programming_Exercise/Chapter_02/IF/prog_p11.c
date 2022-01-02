#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a >= b && a >= c) {
        if(b >= c) {
            printf("\nDescending order : %d %d %d", a, b, c);
            printf("\nAscending order : %d %d %d", c, b, a);
        }
        else {
            printf("\nDescending order : %d %d %d", a, c, b);
            printf("\nAscending order : %d %d %d", b, c, a);
        }
    }
    else if(b >= a && b >= c) {
        if(a >= c) {
            printf("\nDescending order : %d %d %d", b, a, c);
            printf("\nAscending order : %d %d %d", c, a, b);
        }
        else {
            printf("\nDescending order : %d %d %d", b, c, a);
            printf("\nAscending order : %d %d %d", a, c, b);
        }
    }
    else if(c >= a && c >= b) {
        if(a >= c) {
            printf("\nDescending orde : %d %d %d", c, a, b);
            printf("\nAscending orde : %d %d %d", b, a, c);
        }
        else {
            printf("\nDescending order : %d %d %d", c, b, a);
            printf("\nAcending order : %d %d %d", a, b, c);
        }
    }

    return 0;
}