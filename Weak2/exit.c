#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    if(argc == 2 && strcmp( argv[1], "Destinn") == 0)
    {
        printf("Get out off here dumb ass\n");
        return 1;
    }
    else if (argc == 2)
    {
        printf("Hello, %s\n", argv[1]);
        return 0;
    }
    printf("Hello, N/A\n");
    return 0;
}