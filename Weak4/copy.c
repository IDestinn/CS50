#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(32);

    printf("type word: ");
    scanf("%s", s);

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);
    free(s);
    return 0;
}