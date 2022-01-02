#include <stdio.h>
#include <math.h>

int main()
{
    int T, N;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        scanf("%d", &N);

        int root = (sqrt(N));
        if(root * root == N) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}