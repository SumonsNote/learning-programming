#include <stdio.h>

int main()
{
    double km, miles;

    printf("Enter KM: ");
    scanf("%lf", &km);

    miles = km * 0.62137;

    printf("Miles: %.5lf", miles);
    
    return 0;
}