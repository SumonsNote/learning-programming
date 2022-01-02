#include <stdio.h>

void recursion(int count)
{
    if(count > 5) {
        return;
    }
    printf("Count = %d\n", count);
    recursion(count+1);
}

int main()
{
    recursion(1);
    return 0;
}