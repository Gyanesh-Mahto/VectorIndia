/*
4)   Write a C program to  convert a character. If it is  Lower, convert it to Upper. and if it is
     Upper  convert  it to Lower character.
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter any character\n");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z')
    {
    ch=ch-32;
    printf("ch=%c\n", ch);
    }
    else if(ch>='A' && ch<='Z')
    {
    ch=ch+32;
    printf("ch=%c\n", ch);
    }
    else
    printf("Invalid character\n");
    
}