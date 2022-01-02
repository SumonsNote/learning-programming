#include <stdio.h>

int main()
{
    int alam, karim, cow1, cow2, cow3;

    printf("Enter alam cow's price:\n");
    scanf("%d %d %d", &cow1, &cow2, &cow3);
    alam = cow1 + cow2 + cow3;

    printf("Enter karim cow's price:\n");
    scanf("%d %d %d", &cow1, &cow2, &cow3);
    karim = cow1 + cow2 + cow3;

    if(alam > karim) {
        printf("Alam");
    }
    else {
        printf("Karim");
    }

    return 0;
}