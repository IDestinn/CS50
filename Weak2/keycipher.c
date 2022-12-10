#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Перед запуском программы необходимо после названия файла указать ключ 
в размере 26 символов для каждой буквы алфавита*/
int main(int argc, char* argv[])
{
    // Проверка коректность заполения данных перед запуском
    // Содержит ли запуск только 1 аргумент
    if(argc != 2)
    {
        printf("ERROR!\nUsage: ./substitution key\n");
        return 1;
    }
    // Содержит ли аргумент все 26 символов
    if(strlen(argv[1]) != 26)
    {
        printf("ERROR!\nKey must contain 26 characters!\n");
        return 2;
    }

    // Ввод исходного слова
    char input_word[32];
    printf("plaintext: ");
    scanf("%s", input_word);

    // Зашифрованное слово
    char cipher_word[32];

    // Шифрование по каждой букве
    for(int i = 0, n = strlen(input_word); i < n; i++)
    {
        //Шифрование по ключу
        cipher_word[i] = argv[1][(int)toupper(input_word[i]) - 65];

        // Если буквы были пропесными, то оставить их прописными
        if(islower(input_word[i]))
            cipher_word[i] = tolower(cipher_word[i]);
    }

    // Вывод зашифрованного слова
    printf("ciphertext: %s\n", cipher_word);
}