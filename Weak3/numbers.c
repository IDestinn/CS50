#include <stdio.h>

int main(void)
{
    int numbers[] = {1, 3, 4, 5, 6, 1, 3, 5, 0, 2};

    int number_to_find = 0;

    for(int i = 0, n = sizeof(numbers); i < n; i++)
    {
        if(numbers[i] == number_to_find)
        {
            printf("%d found\n", numbers[i]);
            return 0;
        }
    }
    printf("%d not found\n", number_to_find);
    return 1;
}