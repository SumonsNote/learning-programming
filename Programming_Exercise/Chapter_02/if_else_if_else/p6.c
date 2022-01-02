#include <stdio.h>

int main()
{
    int s1, s2, s3;
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 == 1 && s2 == 1 && s3 == 1) {
        printf("We will eat pizza.\n");
    }
    else if(s1 == 1 && s2 == 1 && s3 == 0) {
        printf("We will eat chinese.\n");
    }
    else if(s1 == 1 && s2 == 0 && s3 == 1) {
        printf("We will eat chinese.\n");
    }
    else if(s1 == 0 && s2 == 1 && s3 == 1) {
        printf("We will eat chinese.\n");
    }
    else if(s1 == 1 && s2 == 0 && s3 == 0) {
        printf("We will eat ice cream.\n");
    }
    else if(s1 == 0 && s2 == 0 && s3 == 1) {
        printf("We will eat ice cream.\n");
    }
    else if(s1 == 0 && s2 == 1 && s3 == 0) {
        printf("We will eat ice cream.\n");
    }
    else if(s1 == 0 && s2 == 0 && s3 == 0) {
        printf("Everyone chocolate.\n");
    }

    return 0;
}