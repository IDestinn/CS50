#include <stdio.h>

int main(void)
{
    int age = 0;
    printf("How old are you? \n");
    scanf("%i", &age);

    if (age % 2 == 0)
    {
        printf("Ok, you are age is even \n");
    }
    else
    {
        printf("Ok, you are age is odd \n");
    }
}