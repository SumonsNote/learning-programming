#include <stdio.h>
#include <string.h>

int main()
{
    char n1[60], n2[60], sum[60];
    int n1_len, n2_len, max_len, i;

    gets(n1);
    n1_len = strlen(n1);

    gets(n2);
    n2_len = strlen(n2);

    if(n1_len > n2_len)
    {
        max_len = n1_len;
    }
    else 
    {
        max_len = n2_len;
    }

    for(i = 0; i < n1_len; i++) {
        n1[i] = n1[i] - '0';
    }

    for(i = 0; i < n2_len; i++) {
        n2[i] = n2[i] - '0';
    }

    for(i = 0; i < n1_len/2; i++) {
        char c = n1[i];
        n1[i] = n1[n1_len-i-1];
        n1[n1_len-i-1] = c;
    }

    for(i = n1_len; i < max_len; i++) {
        n1[i] = 0;
    }
    n1[i] = '\0';

    for(i = 0; i < n2_len/2; i++) {
        char c = n2[i];
        n2[i] = n2[n2_len-i-1];
        n2[n2_len-i-1] = c;
    }

    for(i = n2_len; i < max_len; i++) {
        n2[i] = 0;
    }
    n2[i] = '\0';

    int carry = 0;
    for(i = 0; i < max_len; i++) {
        int s = carry+n1[i]+n2[i];
        sum[i] = s%10+'0';
        carry = s/10;
    }
    if(carry)
    {
        sum[i] = carry + '0';
        i++;
        max_len++;
    }
    sum[i] = '\0';

    for(i = 0; i < max_len; i++) {
        char c = sum[i];
        sum[i] = sum[max_len-i-1];
        sum[max_len-i-1] = c;
    }

    printf("%s\n", sum);
    
    return 0;
}