#include <stdio.h>

int main(void)
{
    int n;
    // Ввод размера куба
    do
    {
        printf("Size of cube: ");
        scanf("%i", &n);
    } 
    // Пока он не будет > 0
    while (n < 1);

    // Для каждой строки
    for(int i = 0; i < n; i++)
    {
        // Для каждого столбца
        for(int j = 0; j < n; j++)
        {
            // Напечатать кирпич 
            printf("#");
        }
        // Перенос на следующую строку
        printf("\n");
    }
}