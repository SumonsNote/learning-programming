#include <stdio.h>
#include <stdio.h>

// const float PI = 3.14159; // When first program is used

int main()
{
    // float r, area, volume;

    // scanf("%f", &r);
    // area = 4 * PI * r * r;
    // volume = 4 * PI * r * r * r / 3;

    // printf("Surface Area: %.2f\n", area);
    // printf("Volume: %.2f\n", volume);

    // Alternative

    float pi, r, area, volume;

    scanf("%f", &r);

    pi = acos(-1);

    area = 4 * pi * r * r;
    volume = 4 * pi * r * r * r / 3;

    printf("Surface Area: %.2f\n", area);
    printf("Volume: %.%f\n", volume);

    return 0;
}