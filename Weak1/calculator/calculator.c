#include <stdio.h>

int main(void)
{
    // Выделяем память для переменных
    int x, y, sum = 0;

    // Ввод x и y
    printf("Write x and y: ");
    scanf("%i %i", &x, &y);

    // Сравнение x и y
    if (x > y)
    {
        printf("x bigger then y \n");
    }
    else if (y > x)
    {
        printf("y bigger then x \n");
    }
    else
    {
        printf("x and y are equale \n");
    }

    // Расчет суммы x и y
    sum = x + y;

    // Деление
    float z = (float) x / (float) y;

    //Вывод суммы
    printf("Sum of %i and %i = %i \n And division is %.2f\n", x, y, sum, z);
}