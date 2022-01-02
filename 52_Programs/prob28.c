#include <stdio.h>

int main()
{
    int T, n;
    char array[] = {};
    int sorted = 1;

    scanf("%d", &T);

    while(T--)
    {
        scanf("%d", &n);

        for(int i = 0; i < n; i++)
        {
            if(array[i] < array[i-1])
            {
                sorted = 0;
                break;
            }
        }
    }
}