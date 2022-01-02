#include <stdio.h>
#include <string.h>

struct name_type
{
    char first[20];
    char last[20];
};

struct student 
{
    int id;
    struct name_type name;
};

int main()
{
    struct student hello;

    scanf("%d", &hello.id);
    scanf("%s", hello.name.first);
    scanf("%s", hello.name.last);

    printf("ID: %d\n", hello.id);
    printf("Name: %s %s\n", hello.name.first, hello.name.last);

    return 0;
}