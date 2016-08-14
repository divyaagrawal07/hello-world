//code to check whether a number is palindrome or not
#include<stdio.h>
#include<conio.h>
main()
{
int a,i,j=0,r,s;
clrscr();
scanf("%d",&a);
s=a;
while(a)
{
r=a%10;
j=j*10+r;
a=a/10;
}
if(s==j)
printf("palindrome");
else
printf("not palindrome");
getch();
}


