//code to pass one dimensional array to a function
#include<stdio.h>
#include<conio.h>
void display(int *a)
{
int i;
for(i=0;i<5;i++)
printf("%d",a[i]);
}
main()
{
int a[5],i;
clrscr();
printf("enter the values of the array");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
display(a);
getch();
}
