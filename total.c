#include<stdio.h>
#include<math.h>
main()
{
int i,n,sum[10],a;
int max,min,range;
float avg;
i=sum=0;
printf("Enter the no of data:");
scanf("%d",&n);
printf("Enter the data:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
min=max=sum=a[0];
for(i=1;i<n;i++)
{;
sum=sum+a[i];
if(min>a[i])
min=a[i];
if(max<a[i])
max =a[i];
}
avg=sum/n;
range=max-min;
printf("\n the total is :%d",sum);
printf("\n the min value is:",min);
printf("\n the max value is:%d",max);
printf("The avg value is:%7.2f",avg);
}


