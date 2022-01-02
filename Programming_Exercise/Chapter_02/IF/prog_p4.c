#include <stdio.h>

int main()
{
    int animals, chocholet;

    printf("How many chocholets you have: ");
    scanf("%d", &chocholet);

    printf("How many animals in jungle: ");
    scanf("%d", &animals);

    if(animals <= chocholet) {
        printf("I can cross the jungle\n");
    }
    else {
        printf("I can't cross the jungle\n");
    }
    
    return 0;
}