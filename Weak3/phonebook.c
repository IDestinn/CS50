#include <stdio.h>
#include <string.h>

typedef struct 
{
char names[64];
char numbers[32];
} 
person;


int main(void)
{
    person people[2];

    people[0].names = "Destinn";
    people[0].numbers = "89124351243";

    people[1].names = "Ars";
    people[1].numbers = "84953242234";

    for (int i = 0; i < 3; i++)
    {
        if(strcmp(people[i].names, "Ars") == 0)
        {
            printf("%s found, number: %s\n", people[i].names, people[i].numbers);
            return 0;
        }
    }
    printf("Not found");
    return 1;
}