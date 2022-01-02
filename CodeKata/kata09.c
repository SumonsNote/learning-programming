#include <stdio.h>
#include <string.h>

float add(float n1, float n2) {
    return n1 + n2;
}

float sub(float n1, float n2) {
    return n1 - n2;
}

float mul(float n1, float n2) {
    return n1 * n2;
}

float div(float n1, float n2) {
    return n1 / n2;
}

int main()
{
    float number1, number2, result;
    char operation[10];

    while(1) {
        printf("Enter two float numbers: (or two 0s to exit): ");
        scanf("%f %f", &number1, &number2);
        if(number1 == 0.0 && number2 == 0.0) {
            printf("Program Terminated\n");
            break;
        }
        printf("Enter any of the following command\n");
        printf("\tadd for addition\n\tsub for subtraction\n\tmul for multiplication\n\tdiv for divition\n: ");

        scanf("%s", operation);

        if(!strcmp(operation, "add")) {
            result = add(number1, number2);
        }
        else if(!strcmp(operation, "sub")) {
            result = sub(number1, number2);
        }
        else if(!strcmp(operation, "mul")) {
            result = mul(number1, number2);
        }
        else if(!strcmp(operation, "div")) {
            if(number2 == 0.0) {
                printf("Can not divide by zero\n");
                continue;
            }
            result = div(number1, number2);
        }
        else {
            printf("Unknown Command\n");
        }
        printf("Result : %0.2f\n", result);
    }
    return 0;
}