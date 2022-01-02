#include <stdio.h>

int main()
{
    // Output: Bangladesh
    printf("Bangladesh");
    // Output: Bangladesh (followed by newline)
    printf("Bangladesh.\n");
    //Output: Bangladesh, newline, Bangladesh, newline
    printf("Bangladesh\nBangladesh\n");
    //Output: Bangladesh tab character Bangladesh, why only two Bangladesh
    printf("Bangladesh\rBangladesh\tBangladesh\n");
    
    return 0;
}