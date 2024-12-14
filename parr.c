#include<stdio.h>
main()
{
int i,j,n;
printf("Enter the n:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n+1;j++)
{
printf("*");
}
printf("\n");
}
}

