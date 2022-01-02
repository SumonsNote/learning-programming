#include <stdio.h>

int main()
{
    char ascii;

    for(ascii = 0; ascii < 256; ascii++) {
        printf("Ascii - %d: %c\n", ascii, ascii);
    }
    return 0;
}
