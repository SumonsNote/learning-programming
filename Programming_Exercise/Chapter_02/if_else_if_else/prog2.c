#include <stdio.h>

int main()
{
    int bus, trawller, auto_rickshaw, money;

    scanf("%d %d %d %d", &bus, &trawller, &auto_rickshaw, &money);

    if(money >= auto_rickshaw) {
        printf("I will go by Autorickshaw.\n");
    }
    else if(money >= trawller) {
        printf("I will go by trawller.\n");
    }
    else if(money >= bus) {
        printf("I will go by bus.\n");
    }
    else {
        printf("I will walk.\n");
    }

    return 0;
}