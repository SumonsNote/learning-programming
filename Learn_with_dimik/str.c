#include <stdio.h>

int main()
{
    char str[50];

    int i, length;

    length = 0;

    gets(str);

    for(i = 0; str[i] != '\0'; i++) {
        length = length + 1;
    }

    printf("Size of %s is %d\n", str, length);

    return 0;
}
