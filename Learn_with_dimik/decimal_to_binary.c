#include <stdio.h>
int main()
{
    int binary[30];
    int decimal_no, i = 0, j;

    printf("Enter the Decimal no: \n");

    while(scanf("%d", &decimal_no) == 1) {
      while(decimal_no > 0) {
        binary[i] = decimal_no % 2;
        i++;
        decimal_no = decimal_no/2;
    }

    for(j = i-1; j >=0; j--)
    {
        printf("%d", binary[j]);
        }
        printf("\n\n");
        i = 0; j = 0;
    }
    return 0;
}

