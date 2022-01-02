#include <stdio.h>

int main()
{
    int n;

    printf("Enter a positive integer (> 0): ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("One time\n");
            break;
        case 2:
            printf("Two times\n");
            break;
        default:
            printf("Many times\n");
    }

    return 0;
}