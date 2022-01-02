// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int T, i, N, num, sqrt_num, sum;
//     scanf("%d", &T);

//     while(T--)
//     {
//         scanf("%d", &N);

//         for(num = 1; num <= N; num++)
//         {
//             sum = 1;
//             sqrt_num = sqrt(num);

//             for(i = 2; i <= sqrt_num; i++)
//             {
//                 if(num % i == 0)
//                 {
//                     sum = sum + i + num / i;
//                 }
//             }
//             if(sum == num)
//             {
//                 printf("%d\n", num);
//             }
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int T, i, n;
    scanf("%d", &T);

    int ara[] = {6, 28, 496, 8128, 33550336};

    while(T--)
    {
        scanf("%d", &n);
        for(i = 0; i < 5; i++)
        {
            if(ara[i] <= n)
            {
                printf("%d\n", ara[i]);
            }
            else
            {
                break;
            }
        }
        if(T != 0)
        {
            printf("\n");
        }
    }

    return 0;
}