#include <stdio.h>

int main()
{
    struct student {
        int id;
        char* name;
    };

    struct student hello;

    hello.id = 1;
    hello.name = "Jhanker Mahbub";

    printf("ID: %d\n", hello.id);
    printf("Name: %s\n", hello.name);

    return 0;
}