#include <stdio.h>
#include <locale.h>

int main(void)
{
    int height;

    char *locale = setlocale(LC_ALL, ""); 
    do
    {
        printf("What height of wall: ");
        scanf("%i",&height);

        if (height <= 0)
        {
            printf("Warning Height can't be negative or 0!\n");
        }
        
    } while (height <= 0);
    


    for(int i = 0; i < height+1; i++)
    {
        for(int j = 0; j < height-i; j++)
            printf(" ");

        for(int j = 0; j < i; j++)
            printf("#");

        printf(" ");
        
        for(int j = 0; j < i; j++)
            printf("#");
        
        printf("\n");
    }
}