#include <stdio.h>

void stairs(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < i + 1; j++)
            printf("#");
        
        printf("\n");
    }
        
}

int main(void)
{
    stairs(5);
}