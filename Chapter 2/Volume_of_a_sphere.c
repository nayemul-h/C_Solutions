#include<stdio.h>
int main()
{
    int r;

    float pie=3.1416,result;


    printf("Enter the value of radius= ");
    scanf("%d",&r);


    result=pie*(r*r*r)*(4/3);

    printf("The value of volume is: %0.2f",result);



    return 0;


}
