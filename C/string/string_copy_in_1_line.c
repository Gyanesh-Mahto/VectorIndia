//Write a one line code to copy the string into another buffer.

#include<stdio.h>

int main()
{
char s[100], d[100];
int i;

printf("Please enter string:\n");
scanf("%[^\n]", s);

for(i=0; s[i]; d[i]=s[i], i++);
d[i]=s[i];

printf("Source string:\n");
printf("%s\n", s);

printf("Destination string\n");
printf("%s\n", d);
}
