#include<stdio.h>
#include<math.h>
main()
{
long int p;
int n;
float r,SI;
printf("\nEnter priciple amount:");
scanf("%d",&p);
printf("\nenter rate of amount:");
scanf("%f6",&r);
printf("\nEnter number of year");
scanf("%d",&n);
SI=p*n*r/100;
printf("\n\n interested amount %6.2fRs",SI);
}

