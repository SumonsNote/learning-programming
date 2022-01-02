#include <stdio.h>

void recurse(int count)
{
    if(count > 10) {
        return;
    }
    recurse(count + 1);
    printf("Count = %d\n", count);
}

int main()
{
    recurse(3);
    return 0;
}