#include <stdio.h>

int main()
{
    int total_b_price = 375, total_f_money, eating;
    int f_f, s_f, t_f;
    scanf("%d %d %d", &f_f, &s_f, &t_f);
    total_f_money = f_f + s_f + t_f;

    if(total_b_price <= total_f_money) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}