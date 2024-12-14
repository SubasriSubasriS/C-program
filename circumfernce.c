#include<stdio.h>
#include<math.h>
#define pi 3.14 
main()

{
int r,h,area,circumference;
printf("enter the radius:");
scanf("%d",&r);
printf("Entter the height:");
scanf("%d",&h);
area=pi*r*r;
circumference=2*pi*r;
printf("\nthe area of th circle %d",area);
printf("\nthe circumference of the  circle:%d",circumference);
} 

