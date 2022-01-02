#include <stdio.h>

struct record
{
    char name[50];
    char phone[50];
    char email[50];
};

int main()
{
    struct record a[2];

    int i;

    for(i = 0; i < 2; i++) {
        printf("Enter Name: ");
        scanf("%s", a[i].name);

        printf("Enter Phone: ");
        scanf("%s", a[i].phone);

        printf("Enter Email: ");
        scanf("%s", a[i].email);
    }

    for(i = 0; i < 2; i++) {
        printf("Name: %s\nPhone: %s\nEmail: %s\n", a[i].name, a[i].phone, a[i].email);
    }
    
    return 0;
}