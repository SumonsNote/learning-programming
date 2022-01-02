#include <stdio.h>

int main()
{
    int a, b, c, d, e, f, tall = 0;

    printf("Enter six person age:\n");
    scanf("%d%d%d%d%d%d", &a,&b,&c,&d,&e,&f);

    if(a >= 30) {
        tall = tall + 1;
    }
    if(b >= 30) {
        tall = tall + 1;
    }
    if(c >= 30) {
        tall = tall + 1;
    }
    if(d >= 30) {
        tall = tall + 1;
    }
    if(e >= 30) {
        tall = tall + 1;
    }
    if(f >= 30) {
        tall = tall + 1;
    }

    printf("Numebr of age of thirty %d\n", tall);

    return 0;
}