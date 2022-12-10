#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Функция просчета 
int calculate_score(char* input_string);

int main(void)
{
    // Слова игроков
    char word1[32];
    char word2[32];

    // Ввод слова игроком 1
    printf("Player 1: ");
    scanf("%s", word1);
    
    // Ввод слова игроком 2
    printf("Player 2: ");
    scanf("%s", word2);

    // Определение победителя
    if(calculate_score(word1) > calculate_score(word2))
    {
        printf("Player 1 WIN!\n");
    }
    else if(calculate_score(word1) < calculate_score(word2))
    {
        printf("Player 2 WIN!\n");
    }
    else
    {
        printf("TIE!\n");
    }

}

int calculate_score(char* input_string)
{
    // Система очков в алфавитном порядке
    int const POINTS[26] = 
    {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    int sum = 0;

    // Цикл по каждой букве 
    for(int i = 0, n = strlen(input_string); i < n; i++)
    {
        // Проверяем входит ли символ в английский алфавит, от А (int 65) до Z (int 90)
        if((int) toupper(input_string[i]) >= 65 && (int) toupper(input_string[i]) <= 90)
        {
            // Отнимаем 65 т.к. в ANSI прописная А имеет код 65
            sum = sum + (POINTS[(int) toupper(input_string[i]) - 65]);
        }
    }
    // Возвращаем сумму
    return sum;
}