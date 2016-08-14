//code to print the reverse of a number
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
int a,i,r;
clrscr();
scanf("%d",&a);
while(a!=0)
{
r=a%10;
printf("%d",r);
a=a/10;
}
getch();
}