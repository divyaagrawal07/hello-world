//code to add n natural numbers from 1
#include<stdio.h>
#include<conio.h>
main()
{
int n,sum,i;

sum=0;
scanf("%d",n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("%d",sum);
getch();
}