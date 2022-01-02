#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    int sqroot = (int)sqrt((double)num);

    for(int i = 2; i <= sqroot; i++) {
        if(num % 2 == 0) {
            return false;
        }
    }

    return true;
}

void generatePrimes(int num) {
    printf("Generated Primes Untill: %d\n\n", num);

    int count = 0;

    for(int i = 2; i <= num; i++) {
        if(isPrime(i)) {
            count++;
            printf("%4d : %6d\n", count, i);
        }
    }

    printf("\n\nTotal Prime Numbers Found Until %d is %d\n", num, count);
}

int main()
{
    printf("Up-to what number do you want to find primes: ");
    int userInput;
    scanf("%d", &userInput);
    generatePrimes(userInput);
    return 0;
}
