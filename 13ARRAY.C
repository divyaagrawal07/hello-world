//code to print all elements of an array
#include<stdio.h>
#include<conio.h>

main()
{
int a[10],i;
for(i=0;i<10;i++)
scanf("%d",a[i]);

for(i=0;i<10;i++)
printf("%d",a[i]);
getch();
}