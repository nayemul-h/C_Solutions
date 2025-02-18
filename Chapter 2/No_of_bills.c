#include<stdio.h>
int main()
{
    int amount,twenty_notes,ten_notes,five_notes,one_notes;

    printf("Enter the amount:");
    scanf("%d",&amount);

    twenty_notes=amount/20;
    amount%=20;
    ten_notes=amount/10;
    amount%=10;
    five_notes=amount/5;
    amount%=5;
    one_notes=amount;

    printf("\n$20 bills:%d\n  \n&10 bills:%d\n  \n$5 bills:%d\n  \n$1 bills:%d\n",twenty_notes,ten_notes,five_notes,one_notes);

    return 0;
}
