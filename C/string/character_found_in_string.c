//Write a program to find the no. of times the character is found in a given string.

#include<stdio.h>

int main()
{
char s[100], ch;
int i, count=0;

printf("Please enter any string\n");
scanf("%[^\n]", s);

printf("Entered string is: %s\n", s);
printf("Enter the character which you want to search\n");
scanf(" %c", &ch);

for(i=0; s[i]; i++)
{
if(ch==s[i])
++count;
}

if(count==0)
printf("The character %c is not present in string\n", ch);
else
printf("The character %c is present %d times in string\n", ch, count);
}
