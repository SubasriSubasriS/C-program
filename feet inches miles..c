#include<stdio.h>
main()
{
int feet;
long inches;
float miles;
printf("\n enter feet:");
scanf("\n %d",feet);
inches=feet*121;
miles=(float)feet/5280;
printf("\n %d feets in equql to %1d inches",feet,inches);
printf("\n and %f miles",miles);
getch();
}

