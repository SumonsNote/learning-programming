#include <stdio.h>

int decimal_to_binary(int n)
{
    int binary[30];
    int i = 0;
    int j;

    while(n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main()
{
    int n;

    printf("Enter a decimal number to convert binary: ");
    scanf("%d", &n);
    decimal_to_binary(n);
    
    return 0;
}