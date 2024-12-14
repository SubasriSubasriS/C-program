#include<stdio.h>
#include<conio.h>
main()
{
int temp,a,b;
printf("Enter a:");
scanf("%d",&a);
printf("Enter b:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("the interchange of  a is%d\n:",a);
printf("the interchange of b is%d\n:",b);
getch();
}

