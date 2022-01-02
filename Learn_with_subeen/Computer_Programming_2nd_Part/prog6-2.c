#include <stdio.h>

int main()
{
    struct student {
        int id;
        char* name;
    };

    struct student one;

    one.id;
    one.name = "Tahfid Rafi";

    printf("ID: %d\n", one.id);
    printf("Name: %s\n", one.name);

    return 0;
}