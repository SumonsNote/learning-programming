#include <stdio.h>

int main()
{
    float a, b, c, media;

    scanf("%f %f %f", &a, &b, &c);

    media = (a/10*2)+(b/10*3)+(c/10*5);

    printf("MEDIA = %.1f\n", media);
    return 0;
}
