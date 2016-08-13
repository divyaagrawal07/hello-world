//code for converting upper to lower case
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char c[10];
int l,i;
gets(c);
l=strlen(c);
for(i=0;i<=l;i++)
{
if(c[i]>=65 && c[i]<=90)
c[i]=c[i]+32;
puts(c);
}
getch();
}
