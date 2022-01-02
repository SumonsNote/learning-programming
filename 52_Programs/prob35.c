#include <stdio.h>
#include <math.h>

int main()
{
    float cx, cy, x, y, radius, distance;
    int T;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%f %f", &cx, &cy);
        scanf("%f", &radius);
        scanf("%f %f", &x, &y);

        distance = sqrt((pow((x - cx), 2 ) + pow( (y - cy), 2)));

        if(distance > radius)
        {
            printf("The point is not insdie the circle\n");
        }
        else
        {
            printf("The point is inside the circle\n");
        }
    }

    return 0;
}