#include <stdio.h>
#include <math.h>

int main()
{
    int total = 10000 + 12000 + 15000;
    float rate = 6 + 5.75 + 5.25;
    int p, t;
    float r, ci;

    ci = total * pow((1 + rate / 100), rate);

    printf("%.2fCI", ci);
}