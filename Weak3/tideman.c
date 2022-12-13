#include <stdio.h>
#include <string.h>
#define MAX argc 9

struct tideman
{
    char votername[32];
    int score;
};

int main(int argc, char* argv[])
{

    if (argc <= 2)
    {
        printf("Type arguments, like: ./tideman <condidat1> + <condidat2>...\n");
        return 1;
    }

    int number = 0;

    struct tideman voters[argc - 1];

    for(int i = 0, n = argc - 1; i < n; i++)
        strcpy(voters[i].votername, argv[i+1]);

    printf("Number of voters: ");
    scanf("%d", &number);
    printf("\n");

    char vote[32];
    int flag;

    for (int i = 0; i < number; i++)
    {
        for(int j = 1; j < argc; j++)
        {
            do
            {
                flag = 0;
                printf("Rank %i: ", j);
                scanf("%s", vote);
                
                for(int k = 0, n = argc - 1; k < n; k++)
                {
                    if (!strcmp(vote,voters[k].votername))
                    {
                        voters[k].score += argc - j;
                        flag = 0;
                        break;
                    }
                    else
                    {
                        flag = 1;
                    }
                }
                if (flag == 1)
                    printf("ОШИБКА! Введите имя кондидата!\n");
            } while(flag == 1);
        }
        printf("\n");
    }
    char winer[32];
    int winerscore = 0;

    for(int i = 0, n = argc - 1; i < n; i++)
    {
        if (winerscore < voters[i].score)
        {
            winerscore = voters[i].score;
            strcpy(winer,(voters[i].votername));
        }
    }

    printf("Winner is %s!\nWith %d scores\n", winer, winerscore);
}