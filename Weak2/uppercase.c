#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    char s[32];

    printf("Input:  ");
    scanf("%s", s);
    printf("\n");
    
    for(int i = 0, n = strlen(s); i < n; i++)
    {
        s[i] = toupper(s[i]);
    }

    printf("Output: %s\n",s);
}