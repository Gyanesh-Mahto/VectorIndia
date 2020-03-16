#include<stdio.h>

int main()
{
char s1[100], s2[100];
int i;

printf("Please enter 1st string\n");
scanf("%[^\n]", s1);

printf("Please enter 2nd string\n");
scanf(" %[^\n]", s2);

for(i=0; s1[i]||s2[i]; i++)
{
if(s1[i]==s2[i])
continue;
else if(s1[i]>s2[i])
break;
}

if(s1[i]==s2[i])
printf("Both strings are equal\n");

else if(s1>s2)
printf("String S1 is greater than S2\n");

else
printf("String S2 is greater than S1\n");
}
