//code for converting lower to upper case
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
if(c[i]>=97 && c[i]<=122)
c[i]=c[i]-32;
puts(c);
}
getch();
}
