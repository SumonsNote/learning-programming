#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, discriminant, root1, root2, real_part, imag_part;
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if(discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %lf, root2 = %lf\n", root1, root2);
    }
    else if(discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = %lf\n", root1);
    }
    else {
        if(discriminant < 0) {
            real_part = - b / (2 * a);
            imag_part = sqrt(-discriminant) / (2 * a);
        }
        printf("real_part = %lf, imag_part = %lf", real_part, imag_part);
    }

    return 0;
}