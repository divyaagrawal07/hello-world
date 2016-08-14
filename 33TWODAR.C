//code to pass 2D array to a function
#include<stdio.h>
#include<conio.h>
void disp(int a[][3])
{
int i,j;

for(i=0;i<3;i++)
{
printf("\n");
  for(j=0;j<3;j++)
     printf("%d",a[i][j]);
     }

}
main()
{
int a[3][3],i,j;
clrscr();
for(i=0;i<3;i++)
  for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);
     disp(a);
     getch();
     }


