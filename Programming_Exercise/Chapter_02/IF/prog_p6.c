#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    
    while(1) {
    printf("Give me a integer number: ");
    scanf("%d", &n);

    int root = sqrt(n);

    if(root * root == n) {
        printf("Yes.\n");
    }
    else {
        printf("No.\n");
        }
    }

    return 0;
}