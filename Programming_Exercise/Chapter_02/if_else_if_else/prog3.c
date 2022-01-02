#include <stdio.h>

int main()
{
    int class;
    scanf("%d", &class);

    if(class > 10) {
        printf("Higher secondary.\n");
    }
    else if(class > 8) {
        printf("Secondary.\n");
    }
    else if(class > 5) {
        printf("Junior.\n");
    }
    else {
        printf("Primary.\n");
    }

    return 0;
}