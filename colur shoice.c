#include<stdio.h>
main()
{
char choice;
printf("Enter the choice");
choice=getchar();
if(choice>='a' && choice<='z');

choice=choice-32;
switch(choice)
{
case'R':
printf("\n RED");
break;
case'W':
printf("\n WHITE");
break;
case'B':
printf("\n BLUE");
break;
default:
printf("\n ERROR");
break;
}
}

