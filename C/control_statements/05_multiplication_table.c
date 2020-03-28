/*
5)   Write a C program to print multiplication tables from 10 to 20.
*/

#include<stdio.h>

int main()
{
    int m,n,o;
    for(m=10; m<=20; m++)
    {
        for(n=1; n<=10; n++)
        {
            o=m*n;
            printf("%d*%d=%d\n",m,n,o);
        }
        printf("\n\n");
    }
}