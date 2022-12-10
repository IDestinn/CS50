#include <stdio.h>

float discount(float price, int precentage);

int main(void)
{
    float regular;
    int percent_off;

    printf("Regular price: ");
    scanf("%f", &regular);
    printf("Percent off: ");
    scanf("%i", &percent_off);

    float sale = discount(regular, percent_off);

    printf("Sale price: %.2f\n", sale);
}

float discount(float price, int precentage)
{
    return price * (100 - precentage) / 100;
}