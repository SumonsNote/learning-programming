#include <stdio.h>

int main()
{
    int pass_number, got_number;

    printf("What's your number: ");
    scanf("%d", &got_number);

    printf("What's pass number: ");
    scanf("%d", &pass_number);

    if(pass_number <= got_number) {
        printf("You have passed.\n");
    }
    else {
        printf("You have failed.\n");
    }

    return 0;
}