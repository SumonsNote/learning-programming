#include <stdio.h>

int main()
{
    int i, a, b, c, d, e;

    printf("Enter six person height into meter:\n");
    scanf("%d%d%d%d%d\n", &a,&b,&c,&d,&e);

    if(a > b && a > c && a > d && a > e) {
        printf("Person one is taller thean all");
    }
    else if(b > a && b > c && b > d && b > e) {
        printf("Person two is taller than all");
    }
    else if(c > a && c > b && c > d && c > e) {
        printf("Person three is taller than all");
    }
    else if(d > a && d > b && d > c && d > e) {
        printf("Person four is taller than all");
    }
    else if(e > a && e > b && e > c && e > d) {
        printf("Person five is taller than all");
    }

    return 0;
}