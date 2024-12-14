#include<stdio.h>
#include<math.h>
main()
{
int i,n,sum,a[10];
i=sum=0;
printf("Enter the no of data:");
scanf("%d",&n);
printf("\n enter the data:\n");
for(i=0;i<n;i++)
{
scanf("%d",i);
sum=sum+i;
}
printf("\n \n The total is:%d",sum);
getch();
}

