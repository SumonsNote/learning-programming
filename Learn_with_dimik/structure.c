#include <stdio.h>

struct record {
    char name[50];
    char phone[50];
    char email[50];
};

int main()
{
    struct record a, b;

    printf("Enter Name: ");
    scanf("%s", &a.name);

    printf("Enter Phone: ");
    scanf("%s", &a.phone);

    printf("Enter Email: ");
    scanf("%s", &a.email);

    b = a;

    printf("Name: %s\nPhone: %s\nEmail: %s\n", b.name, b.phone, b.email);

    return 0;
}