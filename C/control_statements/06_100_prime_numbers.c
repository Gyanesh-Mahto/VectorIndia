/*
6)   Write a C program to print first 100 prime numbers.
*/
#include<stdio.h>
int main()
{
    int n, i, j;
    for(i=1; i<=100; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            printf("%d\n", i);
        }
    }
}