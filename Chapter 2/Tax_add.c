#include<stdio.h>
int main()
{
    float dollar_cent;


    printf("Enter the amount(dollars-and-cents): ");
    scanf("%f",&dollar_cent);

    float tax=(dollar_cent*(5.f/100.f));

    printf("With tax added: %0.2f",tax+dollar_cent);

    return 0;

}
