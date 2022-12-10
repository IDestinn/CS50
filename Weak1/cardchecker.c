#include <stdio.h>
#include <string.h>

int main(void)
{
    char card_number[16];
    int sum_for_check = 0;

    printf("Write your (or other) card number \n");
    scanf("%s",card_number);

    for(int i = 1; i < strlen(card_number) + 1; i++)
    {
        int card_digit = (int) card_number[strlen(card_number) - i] - 48;
        if (i % 2 == 0)
        {
            if((card_digit * 2) > 9)
            {
                sum_for_check += 1 + (card_digit * 2) % 10;
            }
            else
            {
                sum_for_check += card_digit * 2;
            }
        }
        else
        {
            sum_for_check += card_digit;
        }
    }

    if (sum_for_check % 10 == 0)
    {
        if(card_number[0] == '4')
        {
            printf("This card exist\n");
            printf("VISA\n");
        }
        else if (card_number[0] == '3' && (card_number[1] == '4' || card_number[1] == '7'))
        {
            printf("This card exist\n");
            printf("AMES\n");
        }
        else if (card_number[0] == '5')
        {
            switch (card_number[1])
            {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
                printf("This card exist\n");
                printf("MASTERCARD\n");
                break;
            
            default:
                printf("THIS IS FAKE CARD!\n"); 
                break;
            }
        }
        else
        {
            printf("THIS IS FAKE CARD!\n");
        }
    }
    else
    {
        printf("THIS IS FAKE CARD!\n");
    }
}