#include <stdio.h>
#include <string.h>

struct nametype {
    char first[50];
    char last[50];
};

struct student {
    int id;
    struct nametype name;
};

int main()
{
    struct student one;

    scanf("%d", &one.id);
    scanf("%s", one.name.first);
    scanf("%s", one.name.last);

    printf("ID: %d\n", one.id);
    printf("Name: %s %s\n", one.name.first, one.name.last);

    return 0;
}