#include<stdio.h>
int main()
{
    int date,month,year;
    printf("Enter a date (mm/dd/yyyy):");
    scanf("%d/%d/%d",&month,&date,&year);
    printf("Converted Date:%d%d%d",year,month,date);
    return 0;
}
