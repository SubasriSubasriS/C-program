#include<stdio.h>
#include<string.h>

struct tag
{
int rno;
char name[50];
int m[5];
}s[20];

myline()
{
int i,n,j,tot,avg,res;
for(i=0;i<n;i++)
{
printf("\n Roll no:");
scanf("%d",&s[i].rno);
printf("\n Name:");
scanf("%s",&s[i].name);
printf("\n Enter 5mark:");
for(j=0;j<5;j++)
scanf("%d",&s[i].m[j]);
}
myline();
printf(" Rno \t Name\t sub1\t sub2\t sub3\t sub4\t sub\t ,tot,avg,res");
myline();
for(i=0;i<n;i++)
printf("\n %d ",s[i].rno);
printf("\t %s \t",s[i].name);
tot=0;
avg=0;
res='p';
for(j=0;j<5;j++)
{
printf("%3d ",s[i].m[j]);
tot=tot+s[i].m[j];
if(s[i].m[j]<35 &&res=='p');
res='f';
}
printf("%5d",tot);
avg=tot/5;
printf("%7.2f",avg);
printf("%c",res);
}


