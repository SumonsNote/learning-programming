#include <stdio.h>

int main()
{
    int numbers[5];

    for(int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    for(int j = 4; j > 0; j--) {
        for(int i = 0; i < j; i++) {
            if(numbers[i] > numbers[i + 1])
            {
                int x = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = x;
            }
        }
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}