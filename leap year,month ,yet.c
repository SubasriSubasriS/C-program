#include<stdio.h>
main()
{
int month,year,feb_max;
printf("\n enter month and year:");
scanf("%d %d",&month,&year);
if(month == 2)
{
printf("\n month is febrary");
if((year % 4)==0)
{
printf("\n leap year");
feb_max=29;
}
else
{
printf("\n not a leap year");
feb_max=28;
}
printf("\n max day in this  monthh :%d",feb_max);
}
}

