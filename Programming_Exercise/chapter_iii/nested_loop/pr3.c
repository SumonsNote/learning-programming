#include <stdio.h>

int main()
{
    int input, output;
    scanf("%d", &input);

    while(input != 0) {
        output = 0;
        while(input != 0) {
            output = output * 10;
            output = output + input%10;
            input = input / 10;
        }
        printf("%d\n", output);
        scanf("%d", &input);
    }

    return 0;
}