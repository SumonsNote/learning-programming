#include <stdio.h>

int main()
{
    int n;

    printf("Jony fianl exam number: ");
    scanf("%d", &n);

    if(n >= 40) {
        printf("jony passed the exam");
    }
    else {
        printf("Jon did not pass the exam");
    }
    return 0;
}