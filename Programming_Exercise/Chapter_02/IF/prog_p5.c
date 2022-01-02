#include <stdio.h>

int main()
{
    int bus_seat, friends;

    printf("Bus Seats: ");
    scanf("%d", &bus_seat);

    printf("Friends: ");
    scanf("%d", &friends);

    if(bus_seat >= friends) {
        printf("We can travel.\n");
    }
    else {
        printf("We can't travel.\n");
    }

    return 0;
}