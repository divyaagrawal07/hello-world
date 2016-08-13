//code to print multiplication table
#include<stdio.h>
#include<conio.h>

main()
{
int i,a,m;
scanf("%d",&a);
for(i=1;i<=10;i++)
{
m=a*i;
printf("%d * %d=%d\n",a,i,m);
}
getch();
}