#include <stdio.h>

int main()
{
    int water_temperature;

    printf("Water Temperature: ");
    scanf("%d", &water_temperature);

    if(water_temperature < 0 ) {
        printf("It's hard\n");
    }
    else if(water_temperature < 100) {
        printf("It's liquid\n");
    }
    else if(water_temperature > 100) {
        printf("It's gas\n");
    }
    
    return 0;
}