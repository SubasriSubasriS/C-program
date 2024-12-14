#include<stdio.h>
#include<math.h>
main()
{
int i,j,k,n=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(k=0;k<=(50-i);k++)
printf("");
for(j=1;j<=(2*i-1);k++)
printf("%d",i);
printf("\n");
}
}

