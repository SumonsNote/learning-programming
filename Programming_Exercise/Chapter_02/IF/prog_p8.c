#include <stdio.h>

int main()
{
    int a = 0, b, c, total_money, d;

    b = 600;
    c = 300;

    total_money = b + c;

    int i;

    for(i = 1; i <= 6; i++) {
        printf("Friend %d :\n", i);
        scanf("%d", &d);
        a = a + d;
    }

    if(a >= total_money) {
        printf("We are ready for the picnic.\n");
    }
    else {
        printf("Picnic cancel, We are begger.\n");
    }

    return 0;
}