#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
int rno,name,m1,m2,m3,m4,m5,tot,avg,res;
printf("Enter the rno:");
scanf("%d",&rno);
printf("Enter the name;");
scanf("%s",&name);
printf("Enter the mark:");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

tot=0;
avg=0;
tot=m1+m2+m3+m4+m5;
avg=tot/5;
res;
if(tot>=200)
printf("PASS");
else 
printf("FAIL");
printf("\nThe total mark of the student is:%d",tot);
printf("\nThe average mark of thhe student is:%d",avg);
printf("\nThe result of the student :%s",res);
}

