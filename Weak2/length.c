#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[32];

    printf("type word: ");
    scanf("%s", word);

    int length = strlen(word);
    printf("%i\n", length);
}