#include <stdio.h>

int main()
{
    int ft_marks, st_marks, final_marks;
    double total_marks;

    // ft_marks = 80;
    // st_marks = 74;
    // final_marks = 97;

    printf("First Term: ");
    scanf("%d", &ft_marks);

    printf("Second Term: ");
    scanf("%d", &st_marks);
    
    printf("Fianl Term: ");
    scanf("%d", &final_marks);

    total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;
    printf("%0.2lf\n", total_marks);

    return 0;
}