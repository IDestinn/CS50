#include <stdio.h>
#include <string.h>

int main(void)
{
    char *i, *j;
    printf("i: ");
    scanf("%s", i);
    printf("\n");

    printf("j: ");
    scanf("%s", j);
    printf("\n");

    if (strcmp(i, j) == 0)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}