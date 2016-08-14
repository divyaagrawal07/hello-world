//code to check whether a number is strong or not
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
int a,i,r,f=1,t,s=0;
clrscr();
scanf("%d",&a);
t=a;
while(a!=0)
{
r=a%10;
for(i=1;i<=r;i++)
{
f=f*i;
}
s=s+f;
a=a/10;
}
if(s==t)
printf("the number is strong");
else
printf("the number is not strong");
getch();
}

