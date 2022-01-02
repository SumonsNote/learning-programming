#include <stdio.h>

int main()
{
    int go_to_field, its_friday, cousin_came, pc_ok;

    its_friday = 0; cousin_came = 0; pc_ok = 0;
    go_to_field = its_friday && !(cousin_came && pc_ok);
    printf("%d %d %d => %d\n", its_friday, cousin_came, pc_ok, go_to_field);

    its_friday = 0; cousin_came = 0; pc_ok = 1;
    go_to_field = its_friday && !(cousin_came && pc_ok);
    printf("%d %d %d => %d\n", its_friday, cousin_came, pc_ok, go_to_field);

    its_friday = 0; cousin_came = 1; pc_ok = 1;
    go_to_field = its_friday && !(cousin_came && pc_ok);
    printf("%d %d %d => %d\n", its_friday, cousin_came, pc_ok, go_to_field);

    its_friday = 1; cousin_came = 0; pc_ok = 0;
    go_to_field = its_friday && !(cousin_came && pc_ok);
    printf("%d %d %d => %d\n", its_friday, cousin_came, pc_ok, go_to_field);

    its_friday = 1; cousin_came = 0; pc_ok = 1;
    go_to_field = its_friday && !(cousin_came && pc_ok);
    printf("%d %d %d => %d\n", its_friday, cousin_came, pc_ok, go_to_field);

    its_friday = 1; cousin_came = 1; pc_ok = 0;
    go_to_field = its_friday && !(cousin_came && pc_ok);
    printf("%d %d %d => %d\n", its_friday, cousin_came, pc_ok, go_to_field);

    its_friday = 1; cousin_came = 1; pc_ok = 1;
    go_to_field = its_friday && !(cousin_came && pc_ok);
    printf("%d %d %d => %d\n", its_friday, cousin_came, pc_ok, go_to_field);

    return 0;
}