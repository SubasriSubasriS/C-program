#include<stdio.h>
main()
{
int num,absolute;
printf("Enter the unsigned number:");
scanf("%d",&num);
absolute=(num<0)?-num:num;
printf("Absolute  value=%d \n",absolute);
}

