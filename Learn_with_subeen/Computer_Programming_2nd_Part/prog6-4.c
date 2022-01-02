#include <stdio.h>
#include <string.h>

int main()
{
    struct student {
        int id;
        char name [40];
    };

    struct student hello;

    scanf("%d", &hello.id);
    scanf(" %[^\n]", hello.name);

    printf("ID: %d\n", hello.id);
    printf("NAME: %s\n", hello.name);

    return 0;
}