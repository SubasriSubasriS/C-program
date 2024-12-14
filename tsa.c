#include<stdio.h>
#include<math.h>
#define pi 3.14
main()
{
int tsa,vol,l,b,h,lb,bh,hl;
printf("Enter the length:");
scanf("%d",&l);
printf("Enter the breadth :");
scanf("%d",&b);
printf("Enter the height:");
scanf("%d",&h);
tsa=(2*(lb+bh+hl));
vol=l*b*h;
printf("the tsa of the circle is %d",tsa);
printf("the volume of the circle is%d",vol);
}

