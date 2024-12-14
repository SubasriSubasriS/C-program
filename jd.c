#include<stdio.h>
#include<conio.h>
main()
{
int a,b,sum,sub,mul,div ,mod;
printf("Enter the a");
scanf("%d",&a);
printf("Enter thee b:");
scanf("%d",&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("Addition%d",sum);
printf("Subtraction:%d",sub);
printf("Multiplication%d",mul);
printf("division%d",div);
printf("modulos%d",mod);
getch();
}

