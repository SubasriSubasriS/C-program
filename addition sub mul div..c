#include<stdio.h>
main()
{
float a,b,c;
int ch;
printf("Enter thetwo nunber:");
scanf("%f %f",&a,&b);
printf("\n 1.addition");
printf("\n 2.subtraction");
printf("\n 3.multiplication");
printf("\n 4.division");
printf(" \n enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case1:
     c=a+b;
     printf("Addition:%f",c);
     break;
case2:
     c=a-b;
     printf("Subtracton:%f",c);
     break;
case3:
     c=a*b;
     printf("Multiplication:%f",c);
     break;
case4:
     c=a/b;
     printf("Division:%f",c);
     break;
default:
     printf("your choice is error");
     break;

}
getch();
}

