#include <stdio.h>

int main()
{
    int maximum, minimum, number, n, i;
    
    scanf("%d", &n);
    scanf("%d", &number);

    maximum = minimum = number;

    for(i = 1; i <= n; i++) {
        scanf("%d", &number);
        
        if(number > maximum) maximum = number;
        if(number < minimum) minimum = number;
    }

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}