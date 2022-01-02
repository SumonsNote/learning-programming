#include <stdio.h>

int main()
{
    int int_type;
    float float_type;
    double double_type;
    char chracter_type;

    printf("Size of Integer: %lu\n", sizeof(int_type));
    printf("Size of Float: %lu\n", sizeof(float_type));
    printf("Size of Double: %lu\n", sizeof(float_type));
    printf("Size of Character: %lu", sizeof(chracter_type));
    
    return 0;
}