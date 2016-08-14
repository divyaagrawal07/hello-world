//code for finding fibonacci series
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c,i,n;
clrscr();
scanf("%d %d %d",&a,&b,&n);
a=0;
b=1;
printf("%d %d",a,b);
while(i<=n)
{
c=a+b;
printf("%d ",c);
a=b;
b=c;
i++;
}
getch();
}