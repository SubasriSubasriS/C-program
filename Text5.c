#include<stdio.h>
main()
{
int a,b,t;
printf("Enter two number:");
scanf("%d %d",&a,&b);
printf("before exchange the number are :%d %d\n",a,b);
t=a;
a=b;
b=t;
printf("After interchange :the number are :%d %d",a,b);
getch();
}


