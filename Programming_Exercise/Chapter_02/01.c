#include <stdio.h>

int main()
{
    int height, need_ticket;

    scanf("%d", &height);

    need_ticket = height >= 36;

    printf("Need Ticket: %d\n", need_ticket);

    return 0;
}