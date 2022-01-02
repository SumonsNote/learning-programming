#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp_in;
    char *input_file = "google.jpg";

    fp_in = fopen(input_file, "rb");
    if(fp_in == NULL) {
        perror("File Openning Failed");
        return EXIT_FAILURE;
    }

    fseek(fp_in, 0, SEEK_END);

    printf("File Size: %ld\n", ftell(fp_in));
    printf("File Size (Kilobyte): %ldk\n", ftell(fp_in)/1024);

    fclose(fp_in);

    return 0;
}