#include<stdio.h>
#include<string.h>
main()
{
int t,e,m,s,ss,total,avg,result;
printf("Enter th tamilmark:");
scanf("%d",&t);
printf("Enter the english mark:");
scanf("%d",&e);
printf("Enter the maths mak:");
scanf("%d",&m);
printf("EMter the science mrk:");
scanf("%d",&s);
printf("Entter the social sciece mark:");
scanf("%d",&ss);
total=0;
avg=0;
result=0;
total=t+e+m+s+ss;
avg=(t+e+m+s+ss)/5;
result;
if (result>=35)
printf("pass");
else
printf("Fail");

printf("The total mark of the student is:%d",total);
printf("the average mark of th student is:%d",avg);
printf("The result of the studenis :%d",result);
}

