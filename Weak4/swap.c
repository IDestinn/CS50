#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 5;
    int y = 10;

    printf("x: %i\ny: %i\n", x, y);
    swap(&x, &y);
    printf("x: %i\ny: %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
