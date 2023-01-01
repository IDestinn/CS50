#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Execute like: ./filter -[type] input.bmp output.bmp\n");
        return 1;
    }
    
    FILE *input = fopen(argv[2], "r");
    if (input == NULL)
    {
        printf("Input file can't be opened\n");
        return 1;
    }

    FILE *output = fopen(argv[3], "w");
    if (output == NULL)
    {
        printf("Output file can't be opened\n");
        return 1;
    }
    return 0;
}