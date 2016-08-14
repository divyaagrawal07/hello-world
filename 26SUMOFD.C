//code for finding the sum of digits of the number
#include<stdio.h>
#include<conio.h>
main()
{
int a,i,r,s=0;
clrscr();
scanf("%d",&a);
while(a)
{
r=a%10;
s=s+r;
a=a/10;
}
printf("%d",s);
getch();
}



