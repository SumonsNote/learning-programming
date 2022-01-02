#include <stdio.h>

int main()
{
    int cow, goat;

    printf("Input kalam cow price: ");
    scanf("%d", &cow);

    printf("Input aziz goat price: ");
    scanf("%d", &goat);

    if(cow <= goat) {
        printf("Kamal failed");
    }
    else {
        printf("aziz failed");
    }

    return 0;
}