//code to find that a number is prime or not
#include<stdio.h>
#include<conio.h>
main()
{
int a,i,b,c=0;
clrscr();
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
c++;
}
if(c==2)
printf("number is prime");
else
printf("number is not prime");
getch();
}

