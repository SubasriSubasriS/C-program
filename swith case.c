#include<stdio.h>
main()
{
int choice, n1,n2,t;
printf("1.add,2.sub");
printf("Enter the choice:");
scanf("%d",&choice);
printf("Enter the n1:");
scanf("%d",&n1);
printf("Enter the n2:");
scanf("%d",&n2);
switch(choice)
{
case1: 
       t=n1+n2;
       printf("The addition ofthe numberis :%d",n1);
       break;
case2 :
       t=n1-n2;
       printf("The subtracttion of th   numberi s :%d",n2);
	   break;
}
}

