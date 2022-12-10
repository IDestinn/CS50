#include <stdio.h>

int main(void)
{
    char c[4];
    c[0] = 'H';
    c[1] = 'I';
    c[2] = '!';
    c[3] = '\0';

    printf("Your word is: %s\n", c);
}