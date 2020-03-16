//3.  WAP to find the given number is +ve or -ve using bitwise operators.

#include<stdio.h>
int main()
{
int n, pos=31;

printf("Enter any number\n");
scanf("%d", &n);

if(n&1<<pos)
printf("Negative\n");

else
printf("Positive\n");
}
