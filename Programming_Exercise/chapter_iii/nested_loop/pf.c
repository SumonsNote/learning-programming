#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);

    
    for(i=1; i<=n; i++)
    {
        for(j=n; j>i; j--)
        {
            printf(" ");
        }
      printf("*");
        for(j=1; j<(i-1)*2; j++)
        {
            printf(" ");
        }
        if(i==1) printf("\n");
      else printf("*\n");
    }
    
    for(i=n - 1; i>=1; i--)
    {
        for(j=n; j>i; j--)
        {
            printf(" ");
        }
      printf("*");
        for(j=1; j<(i-1)*2; j++)
        {
            printf(" ");
        }
        if(i==1) printf("\n");
      else printf("*\n");
    }    
    return 0;
}