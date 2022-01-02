#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");

    fprintf(fp, "This is a file created by my program! ");
    fprintf(fp, "Happy Coding!\n");
    fclose(fp);

    fp = fopen(filename, "a");
    fprintf(fp, "Second Line.\n");
    fclose(fp);


    fp = fopen(filename, "a");
    fprintf(fp, "Hello, I am a C programmer.");
    fclose(fp);

    fp = fopen(filename, "r");
    fclose(fp);
    fp = fopen(filename, "w+");
    fclose(fp);
    fp = fopen(filename, "w");
    fprintf(fp, "Hello World");
    fclose(fp);
    fp = fopen(filename, "r+");
    fclose(fp);
    fp = fopen(filename, "a+");
    fprintf(fp, "Hey there!");
    fclose(fp);
    fp = fopen(filename, "a+");
    fprintf(fp, "An Exclusive C Programmer here to help you\n");
    fclose(fp);

    return 0;
}