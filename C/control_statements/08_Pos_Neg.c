/*
8)   Write a C program to print  the binary of a given number( +ve or -ve numbers).
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number\n");
    scanf("%d", &n);
    for(int i=31; i>=0; i--)
    {
        printf("%d", n>>i&1);
    }
    printf("\n");
}