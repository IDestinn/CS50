#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    // Поддержка кириллицы
    char *locale = setlocale(LC_ALL, "");

    // Придумать что делать с stelen
    char word[16];

    // Ввод слова, которое загадывают
    do
    {
        printf("Загадайте слово:  ");
        scanf("%s", word);
        if(strlen(word) < 3 || strlen(word) > 15)
            printf("ОШИБКА! СЛОВО НЕ ПОПАДАЕТ В РАЗМЕРНЫЕ РАМКИ ОТ 3 ДО 16!\n");
    } while(strlen(word) < 3 || strlen(word) > 15);
 
    // Перевод в капс
    for(int i = 0, n = strlen(word); i < n; i++)
    {
       word[i] = toupper(word[i]);
    }

    char guess[16];
    char guesschar[16];
    int numofchar = 0;
    
    // Очищение экрана
    printf("\e[1;1H\e[2J");


    for(int tries = 0; tries < 5; tries++)
    {
        // Вывод слова и попытки
        printf("Попытка №%d\n", tries + 1);
        printf("Загаданное слово: \n");
        for(int i = 0, n = strlen(word); i < n; i++)
        {
            // Если буква на своем месте
            if(guess[i] == word[i])
            {
                printf("%c ", word[i]);
            }
            else // Если буква не на своем месте
            {
                printf("_ ");
            }
            // Если в слове есть эта буква
            if(strchr(guess, word[i]) != NULL)
            {
                bool flag = true;
                for(int j = 0; j < numofchar; j++)
                {
                    if(guesschar[j] == word[i])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                {
                    guesschar[numofchar] = word[i];
                    numofchar++;
                }
            }
        }

        // Вывод букв которые пользователь нашел, но не в том месте слова
        printf("\nЭти буквы есть в загаданном слове: ");
        for(int i = 0; i < numofchar; i++)
        {
            if(i == 0)
                printf("%c", guesschar[i]);
            else
                printf(", %c", guesschar[i]);
        }

        // Красивый отступ
        printf("\n\n");

        // Ввод слова
        do
        {
            printf("Введите слово:  ");
            scanf("%s", guess);
            if(strlen(guess) != strlen(word))
                printf("ОШИБКА! ВВЕДИТЕ СЛОВО ИЗ ТАКОГО ЖЕ КОЛИЧЕСТВА БУКВ!");
            printf("\n"); 
        } 
        while(strlen(guess) != strlen(word));

        // Перевод в капс
        for(int i = 0, n = strlen(guess); i < n; i++)
        {
            guess[i] = toupper(guess[i]);
        }

        // Если слова одинаковые, то сообщение ниже
        if(strcmp(guess, word) == 0)
        {
            printf("Вы угадали слово!\n");
            printf("Это было слово: %s\n", word);
            return 0;
        }

    }
    // Когда заканчиваются попытки, вывод
    printf("Вы не смогли угадать слово\n");
    printf("Это было слово: %s\n", word);
    return 0;
}