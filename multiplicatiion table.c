#include<stdio.h>
#include<math.h>
main()
{
int i,n,p;
for(i=0;i<=20;i++);
printf("Enter the no of the table:");
scanf("%d",&n);
i=1;
for(i=1;i<=20;i++)
{
p=n*i;
printf("\n %d x %d =%d",i,n,p);
}
}

