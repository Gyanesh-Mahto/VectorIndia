//Write a program to find string length using pointer.
#include<stdio.h>

int stringlen(char *p)
{
    int i;
    for(i=0; p[i]; i++);
    return i;
}

int main()
{
    char s1[100];
    char *cp;
    int len;
    printf("Enter the string\n");
    scanf("%[^\n]", s1);
    cp=s1;
    len=stringlen(cp);
    printf("String length=%d\n",len);
}