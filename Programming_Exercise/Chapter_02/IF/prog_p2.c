#include <stdio.h>

int main()
{
    int museam_ticekt, my_pocket;

    printf("Museam Ticket: ");
    scanf("%d", &museam_ticekt);

    printf("My Pocket: ");
    scanf("%d", &my_pocket);

    if(museam_ticekt <= my_pocket) {
        printf("I can buy ticket\n");
    }
    else {
        printf("I can't buy ticket\n");
    }

    return 0;
}