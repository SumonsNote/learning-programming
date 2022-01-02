#include <stdio.h>

int string_length(char str[])
{
    int i, length = 0;

i = 0;
while(str[i] != '\0') {
    length++;
    i++;
   }
   return length;
}

int main()
{
    char country[100];

    int length;

    while(1 == scanf("%s", country)) {
        length = string_length(country);
        printf("Length: %d\n", length);
    }
    return 0;
}