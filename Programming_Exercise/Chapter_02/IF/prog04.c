#include <stdio.h>

int main()
{
    int man1, man2, man3, man4, man5, man6, millionaire = 0;
    
    scanf("%d %d %d %d %d %d", &man1, &man2, &man3, &man4, &man4, &man5, &man6);

    if(man1 >= 1000000) {
        millionaire = millionaire + 1;
    }
    if(man2 >= 1000000) {
        millionaire = millionaire + 1;
    }
    if(man3 >= 1000000) {
        millionaire = millionaire + 1;
    }
    if(man3 >= 1000000) {
        millionaire = millionaire + 1;
    }
    if(man4 >= 1000000) {
        millionaire = millionaire + 1;
    }
    if(man5 >= 1000000) {
        millionaire = millionaire + 1;
    }
    if(man6 >= 1000000) {
        millionaire = millionaire + 1;
    }

    printf("Number of Millionaries: %d\n", millionaire);

    return 0;
}