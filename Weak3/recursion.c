#include <stdio.h>

void stairs(int height)
{
    if(height != 0 || height < 0)
        stairs(height - 1);

    for (int i = 0; i < height; i++)
    {
        printf("#");
    }
    printf("\n");
}

int main(void)
{
    stairs(5);
}