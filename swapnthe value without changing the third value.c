#include<stdio.h>
main()
{
int a,b;
printf("A=");
scanf("%d",&a);
printf("B:",&b);
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n\nA=%d \tb=%d",a,b);
}

