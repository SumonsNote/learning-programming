#include <stdio.h>

int main()
{
    // float meter, feet, inch;

    // scanf("%f", &meter);
    // feet = meter * 3.28084;
    // inch = (feet - (int) feet) * 12;

    // printf("%d feet %.2f inch\n", (int) feet, inch);

    // Alternative

    float meter, cm, total_inch, inch;
    int feet;

    scanf("%f", &meter);
    cm = meter * 100;
    total_inch = cm * 0.393701;
    feet = (int) (total_inch / 12);
    inch = total_inch - feet*12;

    printf("%d feet %.2f inch\n", feet, inch);

    return 0;
}