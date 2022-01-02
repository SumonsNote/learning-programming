#include <stdio.h>

int main()
{
    double time;
    scanf("%lf", &time);

    if(time > 8.00 && time < 9.00) {
        printf("Babar.\n");
    }
    else if(time > 9 && time < 10) {
        printf("Humayun.\n");
    }
    else if(time > 10 && time < 11) {
        printf("Akbar.\n");
    }
    else if(time > 11 && time < 11.30) {
        printf("Tifin Break.\n");
    }
    else if(time > 11.30 && time < 12.30) {
        printf("Jahangir.\n");
    }
    else if(time > 12.30 && time < 1.30) {
        printf("Jahjahan.\n");
    }

    return 0;
}