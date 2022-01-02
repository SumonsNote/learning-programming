#include <stdio.h>
#include <math.h>
int main()
{
    int T, a, b, c;
    scanf("%d", &T);

    while(T--)
    {
        scanf("%d %d %d", &a, &b, &c);
        int s = (a + b + c) / 2;
        double area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %0.3lf\n", area);
    }

    return 0;
}