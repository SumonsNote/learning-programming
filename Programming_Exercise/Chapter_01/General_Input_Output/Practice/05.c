#include <stdio.h>

int main()
{
    int pen_price, pen_number;

    printf("Enter number of pen: ");
    scanf("%d", &pen_number);
    
    printf("Enter price of pen: ");
    scanf("%d", &pen_price);

    printf("\n");
    
    printf("Total price of pen: %d", pen_number * pen_price);

    return 0;
}