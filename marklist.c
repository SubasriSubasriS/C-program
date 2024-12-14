#include<stdio.h>
#include<math.h>
main()
{
int m1,m2,m3,m4,m5,m6,total;
float avg;
printf("enter the six mark:");
scanf("%d %d %d %d %d %d",&m1,&m2,&m3,&m4,&m5,&m6);
avg=(m1+m2+m3+m4+m5+m6)/6;
total=m1+m2+m3+m4+m5+m6;
printf("The total mark is:%d",total);
printf("average=%1f \n",avg);
if(avg>=90)
printf("A grade");
if(avg>=80)
printf("B grade");
if(avg>=70)
printf("C grade");
if (avg>=60)
printf("D grade");
else 
printf("Fail");
}


