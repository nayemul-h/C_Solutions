#include<stdio.h>
int main()
{
    float loan,interest,Monthly_Payment;
    printf("Enter amount of loan:\n");
    scanf("%f",&loan);
    fflush(stdin);
    printf("Enter interest rate:\n");
    scanf("%f",&interest);
    fflush(stdin);
    printf("Enter monthly payment:\n");
    scanf("%f",&Monthly_Payment);


           float M_Interest=((6/100)/12);

    float F_Month=(loan+(loan*M_Interest))-Monthly_Payment;
    float S_Month=(F_Month+(loan*M_Interest))-Monthly_Payment;
    float T_Month=(S_Month+(loan*M_Interest))-Monthly_Payment;

    printf("\nBalance remaining after first payment:%0.2f\n\nBalance remaining after second payment:%0.2f\n\nBalance remaining after third payment:%0.2f\n",F_Month,S_Month,T_Month);


    return 0;

}
