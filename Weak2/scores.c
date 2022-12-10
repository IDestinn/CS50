#include <stdio.h>

int main(void)
{   
    
    int length; 

    printf("How many scores you get?\n");
    scanf("%d", &length);

    int scores[length];
    int sum;

    for(short i = 0; i < length; i++)
    {
        printf("Result for %i exam: ", i + 1);
        scanf("%d", &scores[i]);
        sum += scores[i];
        printf("\n");
    }

    printf("Your avarage score: %f\n", (float) sum / length);
}