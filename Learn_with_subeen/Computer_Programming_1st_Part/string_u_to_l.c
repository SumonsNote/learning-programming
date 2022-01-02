#include <stdio.h>

int main()
{
    char country[] = {'P', 'R', 'O', 'G', 'R', 'A', 'M', 'M', 'I', 'N', 'G', '\0'};
    int i, length;

    printf("%s\n", country);

    length = 11;

    for(i = 0; i < length; i++) {
        if(country[i] >= 65 && country[i] <= 90) {
            country[i] = 'a' + (country[i] - 'A');
        }
    }

    printf("%s\n", country);

    return 0;
}
