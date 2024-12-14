#include<stdio.h>
#include<math.h>
#define pi 3.14
main()
{
int r,h,volume;
printf("enter the radius:");
scanf("%d ",&r);
printf("Enter the height:");
scanf("%d",&h);
volume=pi*r*r*h;
printf("Volume of the circle is %d",volume);
}

