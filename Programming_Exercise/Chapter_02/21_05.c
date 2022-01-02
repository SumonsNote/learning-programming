#include <stdio.h>

int main()
{
    int father, mother, brother;

    printf("Father Age: ");
    scanf("%d", &father);

    printf("Mother Age: ");
    scanf("%d", &mother);

    printf("Brother Age: ");
    scanf("%d", &brother);

    if(father > 72 && mother > 72 && brother < 12) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
    return 0;
}