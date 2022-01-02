#include <stdio.h>

int main()
{
    int total_friends, total_plum;

    printf("Friends: ");
    scanf("%d", &total_friends);

    printf("Plum: ");
    scanf("%d", &total_plum);

    int remained_plum = total_plum / total_friends;

    printf("Remaind Plum: %d\n", total_plum - (remained_plum * total_friends));

    return 0;
}