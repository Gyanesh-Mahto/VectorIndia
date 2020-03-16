//Write a program to find string length using pointer.

#include<stdio.h>

int main()
{
char s[100];
int len;
printf("Enter any string\n");
scanf("%[^\n]", s);

for(len=0; s[len]; len++);

printf("Length of the string is %d\n", len);
}
