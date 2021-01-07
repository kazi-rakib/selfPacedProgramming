#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *fp_in, *fp_out;
    char *input_file = argv[1];
    char *output_file = argv[2];
    int ch;

    fp_in = fopen(input_file, "rb");
    if( fp_in == NULL ){
        perror("File can't be opened: ");
        return EXIT_FAILURE;
    }

    fp_out = fopen(output_file, "wb");
    while(1){
        ch = fgetc(fp_in);
        if(ch == EOF) {
            break;
        }
        fputc(ch, fp_out);
    }

    fclose(fp_in);
    fclose(fp_out);

    return EXIT_SUCCESS;
}

