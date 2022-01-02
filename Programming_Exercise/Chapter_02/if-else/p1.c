#include <stdio.h>

int main()
{
    int a, b, c, d, l1, l2, largest;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    
    if(a > b)
    {
        l1 = a;
    }
    else
    {
        l1 = b;
    }
    
    if(c > d)
    {
        l2 = c;
    }
    else
    {
        l2 = d;
    }

    if(l1 > l2)
    {
        largest = l1;
    }
    else
    {
        largest = l2;
    }

    printf("%d", largest);

    return 0;
}