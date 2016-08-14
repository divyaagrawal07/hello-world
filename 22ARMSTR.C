//code to find that a number is armstrong or not
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a,i,n=0,b,t,r,s=0;
clrscr();
scanf("%d",&a);
t=a;

while(a!=0)
{
 r=a%10;
 s+=(r*r*r);
 a=a/10;
 }
 if(s==t)
 printf("the number is armstrong");
 else
 printf("number is not armstrong");
 getch();
 }

