#include<stdio.h>
main()
{
int m1,m2,m3;
float avg;
printf("Enter 3 marks:");
scanf("%d %d %d ",&m1,&m2,&m3);
avg=(m1+m2+m3)/3;
printf("average=%1f\n",avg);
if(avg>=60)
{
if(avg>=80)
printf("A grade");
else
printf("B grade");
}
else
{
if(avg>=40)
printf("C grade");
else
printf("Fail");
}
getch();
}





























































































































































































































































