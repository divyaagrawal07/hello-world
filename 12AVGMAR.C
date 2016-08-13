//code to get the marks of a student and print average ofit
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
 int a,b,c,d,e,avg;
 printf("enter the marks of student ");
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 avg=(a+b+c+d+e)/5;
 printf("%d",avg);
 getch();
 }