#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n", s);
    char *p = &s[0];
    printf("%p\n", p);

    int numbers[] = {1, 2, 5, 7, 4, 8, 5, 9};

    printf("%i\n", numbers[0]);
    
}