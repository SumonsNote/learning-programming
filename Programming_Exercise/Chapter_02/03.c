#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d%d%d", &A, &B, &C);
    printf("%d\n", A && (A || C));

    return 0;
}