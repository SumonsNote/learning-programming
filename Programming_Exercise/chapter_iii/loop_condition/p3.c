#include <stdio.h>

int main()
{
    int i, person = 0, n;

    for(i = 1; i <= 10; i++) {
        scanf("%d", &n);
        if(n >= 60) {
            person = person + 1;
        }
    }
    
    printf("%d", person);

    return 0;
}