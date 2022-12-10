#include <stdio.h>

int main(void)
{
    int repeat;
    char status;
    do 
    {
        repeat = 0;
        printf("Do you agree with me? y/n \n");
        scanf("%c", &status);

        if (status == 'y' || status == 'Y')
        {
            printf("Good boy my friend! \n");
        }
        else if (status == 'n' || status == 'N')
        {
            printf("FUCK OF DUD, GET OUT OF HERE! \n");
        }
        else
        {
            printf("What did you said? Can you repeat? \n");
            repeat = 1;
        }
    }
    while(repeat == 1);
}