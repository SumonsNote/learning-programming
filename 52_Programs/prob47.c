#include <stdio.h>

int main()
{
    int a[] = {1, 2, 4, 7, 9 ,10};
    int b[] = {1, 2, 3, 4, 7, 8, 9, 10};
    int c[20];
    int i = 0, j = 0, k = 0, n1 = 6, n2 = 8, n, T;

        while(1)
        {
            if(a[i] < b[j])
            {
                c[k] = a[i];
                k++;
                i++;
            }
            else
            {
                c[k] = b[j];
                k++;
                i++;
            }
        }
        n = k;

        printf("%d\n", c[0]);
        for(i = 1; i < n; i++)
        {
            printf(" %d", c[i]);
        }
        printf("\n");
        return 0;
}