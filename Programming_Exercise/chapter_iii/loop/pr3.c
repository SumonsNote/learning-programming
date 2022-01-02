#include <stdio.h>

int main()
{
    int number = 3;

    for(int i = 1; i <= 100; i++, number+=3) {
        printf("%d\n", number);
    }

    return 0;
}