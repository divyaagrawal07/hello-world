//code to find that a number is perfect or not
#include<stdio.h>
#include<conio.h>
main()
{
int a,i,s=0;
clrscr();
printf("enter the number");
scanf("%d",&a);
for(i=1;i<a;i++)
{
if(a%i==0)
s+=i;
}
if(s==a)
printf("number is perfect");
else
printf("number is not perfect");
getch();
}

