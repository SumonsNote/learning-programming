#include <stdio.h>
#include <string.h>

void process_string()
{
    char str1[128], str2[128];
    int i, j, k, pos, len1, len2;

    scanf("%s %s", str1, str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    for(i = 0; i <= len1 - len2; i++) {
        k = i;
        for(j = 0; j < len2; j++) {
            if(str1[k] != str2[j]) {
                break;
            }
            k += 1;
        }
        if(j == len2) {
            pos = i;
            break;
        }
    }
    printf("%d\n", pos);
}

int main()
{
    int T;
    scanf("%d", &T);

    while(T--)
    {
        process_string();
    }
    return 0;
}