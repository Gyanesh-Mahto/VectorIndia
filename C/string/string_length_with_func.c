#include<stdio.h>

int len(char *p)
{
int i;
for(i=0; p[i]; i++);
return i;
}

int main()
{
char s[100], *p;
int Len;

printf("Please enter any string:\n");
scanf("%[^\n]", s);

p=s;

Len=len(p);

printf("The length of the string is %d\n", Len);
}
