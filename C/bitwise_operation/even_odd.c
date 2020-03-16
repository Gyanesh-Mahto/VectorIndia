//2. WAP to find the given number is even or odd using bitwise operators.

#include<stdio.h>

int main()
{
int n;
printf("Enter any number:\n");
scanf("%d", &n);
if(n&1)
printf("Odd\n");
else
printf("Even\n");
}
