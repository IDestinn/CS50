#include <stdio.h>
#include <string.h>

int main(void)
{
    char* names[] = {"Nick", "Jery", "Bob", "Bill"};

    for(int i = 0, n = sizeof(names); i < n; i++)
    {
        if (strcmp(names[i], "Bill") == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return -1;
}