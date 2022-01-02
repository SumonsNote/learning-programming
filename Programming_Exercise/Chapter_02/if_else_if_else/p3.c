#include <stdio.h>

int main()
{
    double himalay = .7;

    double parbat, pahar, dhila;

    scanf("%lf %lf %lf", &parbat, &pahar, &dhila);

    if(parbat == himalay) {
        printf("Parbat will get.\n");
    }
    else if(pahar == himalay) {
        printf("Pahar will get.\n");
    }
    else if(dhila == himalay) {
        printf("Dhila will get.\n");
    }
    else {
        printf("Himalay Babu will buy in online.\n");
    }

    return 0;
}