#include <stdio.h>
#include <string.h>

int main()
{
    char a[50] = "Welcome to the world ";
    char b[50] = "He is Picasso";

    strcat(a, b);

    printf("%s", strcat(a, b));

    return 0;
}
