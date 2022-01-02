#include <stdio.h>

int main()
{
    int friends, plum;

    printf("Enter number of friends: ");
    scanf("%d", &friends);

    printf("Enter number of plum: ");
    scanf("%d", &plum);

    printf("Every plum got: %d\n", plum / friends);

    return 0;
}