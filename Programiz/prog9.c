#include <stdio.h>

int main()
{
    int number;

    printf("Enter a integer: ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("The number is even.\n", number);
    }
    else {
        printf("The number is odd.\n", number);
    }
    return 0;
}