//Write a one line code to copy the string into another buffer.
#include<stdio.h>
int main()
{
    char s1[100], s2[100];
    int i;
    printf("Enter any string\n");
    scanf("%[^\n]", s1);
    printf("String: %s--> entered in 1 memory location with address: %u\n", s1,s1);
    for(i=0; s2[i]=s1[i]; i++);
    s2[i]=s1[i];
    printf("String: %s--> entered in another memory location with address: %u\n", s2,s2);
}