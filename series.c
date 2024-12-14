#include<stdio.h>
int main()
{
int l,n;
print("Enter n");
scanf("%d",&n);
for(int i=-n;i<=n;i++)
{
if(i<0)
l=-i;
else
l=+i;

for(int s=0;s<l;s++)
{
printf("  ");
}
for(int j=0;j<2*(n-l);j++)
{
printf("* ");
}
printf("\n");
}
return 0;
}

