#include<stdio.h>
int main()
{
    int x;

    printf("Enter the value of x:");
    scanf("%d",&x);

    int result=((((3*x+2)*x-5)*x+7)*x-6);

    printf("Result: %d",result);


    return 0;
}
