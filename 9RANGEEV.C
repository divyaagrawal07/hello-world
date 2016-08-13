//code to print all even numbers of given range
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,i;
printf("enter the range");
scanf("%d %d",&a,&b);
if(a%2!=0)
{
for(i=(a+1);i<=b;i+=2)
printf("%d",i);
}
else
{
for(i=a;i<=b;i+=2)
printf("%d",i);
}
getch();
}

