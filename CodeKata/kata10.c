#include <stdio.h>
#include <string.h>

float add(float n1, float n2)
{
    return n1 + n2;
}

float sub(float n1, float n2)
{
    return n1 - n2;
}

float mul(float n1, float n2)
{
    return n1 * n2;
}

float div(float n1, float n2)
{
    return n1 / n2;
}

int main()
{
    float number1, number2, result;
    char input[10];
    char operation[20];

    while(1) {
        printf("Enter two numbers: (or type exit): ");
        scanf(" %[^\n]", input);
        if(!strcmp(input, "exit")) {
            printf("Program Terminated\n");
            break;
        }
        sscanf(input, "%f %f", &number1, &number2);
        printf("Enter any of the following key\n");
        printf("\tadd for addition\n\tsub for subtraction\n\tmul for multiplication\n\tdiv for dividion\n: ");

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
            continue;
        }
        printf("Result : %0.2f\n", result);
    }
    return 0;
}