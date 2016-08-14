//code to find factorial of a number
#include<stdio.h>
#include<conio.h>
main()
{
int a,f=1,i;
clrscr();
scanf("%d",&a);
for(i=1;i<=a;i++)
{
f=f*i;
}
printf("%d",f);
getch();

}
