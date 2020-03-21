//1)   Write a C Program to Find the factorial of a given number. User has to take the i/p at runtime.

#include<stdio.h>
int main()
{
int long fact=1, n, r;
printf("Enter the number for which you want factorial:\n");
scanf("%ld", &n);

if(n<0)
{
printf("No factorial for negative number\n");
}
while(n>0)
{
fact=fact*n;
n--;
}
printf("The factorial of the above mentioned number is %ld\n", fact);
}
