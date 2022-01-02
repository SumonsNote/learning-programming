#include <stdio.h>

int main()
{
    char a[30] = "United", b[30] = " States Of America";

    int i, j, length = 6;

    for(i = length, j = 0; b[j] != '\0'; i++, j++) {
        a[i] = b[j];
    }

    printf("%s\n", a);

    return 0;
}
