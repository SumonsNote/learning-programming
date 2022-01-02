#include <stdio.h>

int main()
{
    int N, T, LSD, MSD, SUM = 0;
    scanf("%d", &T);

    for(int i = 1; i<= T; i++) {
        scanf("%d", &N);

        LSD = N % 10;
        
        while(N >= 10)
        {
            N = N/10;
        }
        MSD = N;

        SUM = MSD + LSD;
        printf("Sum = %d\n", SUM);
    }
    return 0;
    
}