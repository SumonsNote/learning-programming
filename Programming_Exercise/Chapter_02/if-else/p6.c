#include <stdio.h>

int main()
{
    char posal_danga = 'p', naren_gangly = 'n', morning = 'm', afternoon = 'a';
    char school_name, shift_name;

    scanf("%c", &school_name);
    scanf("%c", &shift_name);

    if(school_name == 'p' && shift_name == 'm') {
        printf("Yellow\n");
    }
    else if(school_name == 'p' && shift_name == 'a') {
        printf("Green\n");
    }
    else if(school_name == 'n' && shift_name == 'm') {
        printf("Red\n");
    }
    else if(school_name == 'n' && shift_name == 'a') {
        printf("Blue\n");
    }

    return 0;
}