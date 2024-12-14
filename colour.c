#include<stdio.h>
#include<string.h>
main()
{
char choice;
printf("Enter the choice:");
getts(choice);
if(choice >='a' && choice <='z')
choice=choice-32;
switch(choice);
{
case 'R':
printf("\n red");
break;
case 'W':
printf("\n white");
break;
case 'Y':
printf("\n Yellow");
break;
case 'B':
printf("\n Black");
break;
default:
printf("Errror");

}
}

