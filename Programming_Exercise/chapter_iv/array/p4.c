#include <stdio.h>

int main()
{
    int i;
    int largest = -1, second_largest = -1;

    int array[10];

    for(i = 0; i < 10; i++) {
        printf("Enter number:\n");
        scanf("%d", &array[i]);
    }

    for(i = 0; i < 10; i++) {
        if(array[i] > largest) {
            second_largest = largest;
            largest = array[i];
        }
        else if(array[i] > second_largest) {
            second_largest = array[i];
        }
    }

    printf("First Largest Number is %d\n", largest);
    printf("Second Largest number is %d\n", second_largest);

    return 0;
}