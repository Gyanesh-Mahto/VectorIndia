/*
7)   Write a C program to print ArmStrong Numbers between 1 to 500.
*/
#include<stdio.h>
int main()
{
    int cube=0, digit=0, sum_cubes=0;
    for(int i=1; i<=500; i++)
    {
        int temp;
        temp=i;
        while(temp)
        {
            digit=temp%10;
            cube=digit*digit*digit;
            sum_cubes=sum_cubes+cube;
            temp=temp/10;
        }
        if(sum_cubes==i)
        printf("%d\n",i);
        digit=0;
        cube=0;
        sum_cubes=0;
    }
}