#include <stdio.h>
#include <locale.h>

int main (void) 
{
    char *locale = setlocale(LC_ALL, "");

    char name_of_user[35];

    printf("Hello, CS50!\n");
    scanf("%35s", &name_of_user);
    printf("Hello, %s \n", name_of_user);
}   