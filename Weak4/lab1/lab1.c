#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Execute like: ./lab1 input.wav output.wav factor\n");
        return 1;
    }
    
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Input file can't be opened\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Output file can't be opened\n");
        return 1;
    }

    float factor = atof(argv[3]);
    

    uint8_t header[HEADER_SIZE];
    fread(header, sizeof(uint8_t), HEADER_SIZE, input);
    fwrite(header, sizeof(uint8_t), HEADER_SIZE, output);

    int16_t buffer;
    printf("%p\n", &buffer);
    while (fread(&buffer, sizeof(int16_t), 1, input))
    {
        printf("%d\n", buffer);
        buffer *= factor;
        fwrite(&buffer, sizeof(int16_t), 1, output);
    }

    fclose(input);
    fclose(output);

    printf("Succses!");
    return 0;
}