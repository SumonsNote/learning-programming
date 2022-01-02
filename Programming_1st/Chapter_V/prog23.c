#include <stdio.h>

int main()
{
    double laon_amount, interest_rate, number_of_years, total_amount, monthly_amount;

    printf("Enter the loan amount: ");
    scanf("%lf", &laon_amount);

    printf("Enter the interest rate: ");
    scanf("%lf", &interest_rate);

    printf("Enter number of years: ");
    scanf("%lf", &number_of_years);

    total_amount = laon_amount + laon_amount * interest_rate * number_of_years / 100;
    monthly_amount = total_amount / (number_of_years * 12);

    printf("Total amount: %0.2lf\n", total_amount);
    printf("Monthly amount: %0.2lf\n", monthly_amount);

    return 0;
}