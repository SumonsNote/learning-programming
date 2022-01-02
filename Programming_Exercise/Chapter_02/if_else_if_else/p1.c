#include <stdio.h>

int main()
{
    double c;
    scanf("%lf", &c);

    if(c < 0) {
        printf("It's hard.\n");
    }
    else if(c >= 0 && c <= 100) {
        printf("Torol.\n");
    }
    else {
        printf("Air.\n");
    }

    return 0;
}