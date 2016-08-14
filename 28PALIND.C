//code to check whether a string is palindrome or not
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int i,j,l,c=0;
char s[10];
clrscr();
gets(s);
l=strlen(s);
for(i=0,j=l-1;i<=l;i++,j--)
{
if(s[i]==s[j])
c++;
}
if(c==l)
printf("palindrome string");
else
printf("not palindrme");

getch();
}

