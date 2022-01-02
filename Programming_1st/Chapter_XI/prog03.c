#include <stdio.h>

int main()
{
    int namta[10][10];
    int row, col, result1;

    int even = 0;
    int odd = 0;

    for(row = 1; row <= 10; row++) {
        result1 = 0;

        for(col = 1; col <= 10; col++) {
            result1 = result1 + row;
            
            namta[row - 1][col - 1] = result1;

            printf("%d * %d = %d\n", row, col, namta[row - 1][col - 1]);

            if(namta[row - 1][col - 1] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        
        printf("\n");
    }
        printf("Even: %d\n", even);
        printf("Odd: %d\n", odd);

    return 0;
}