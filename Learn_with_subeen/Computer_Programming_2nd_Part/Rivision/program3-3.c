#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");

    fprintf(fp, "This is file created by my program! ");
    fprintf(fp, "I so happy.\n");
    fclose(fp);

    fp = fopen(filename, "a");
    fprintf(fp, "Second Line.\n");
    fclose(fp);

    fp = fopen(filename, "r");
    fprintf(fp, "I AM A JUNIOR PROGRAMMER");
    fclose(fp);

    return 0;
}