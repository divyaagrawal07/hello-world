//code to find genetic root of a number
#include<stdio.h>
#include<conio.h>
main()
{
int a,i,r,s=0;
clrscr();
scanf("%d",&a);
while(a>10)
{
s=0;
while(a)
{
i=a%10;
a=a/10;
s+=i;
}
if(s>10)
a=s;
}
printf("%d",s);
getch();
}