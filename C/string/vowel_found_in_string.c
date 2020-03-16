//Write a program to find vowels in a given string.

#include<stdio.h>

int main()
{
char s[100];
int i, count=0;

printf("Enter any string\n");
scanf("%[^\n]", s);

for(i=0; s[i]; i++)
{
if('a'==s[i]||'e'==s[i]||'i'==s[i]||'o'==s[i]||'u'==s[i]||'A'==s[i]||'E'==s[i]||'I'==s[i]||'O'==s[i]||'U'==s[i])
++count;
}

printf("Total vowels:%d found in string %s\n", count, s);
}
