//Factorial Number

#include<stdio.h>

int main()
{
long int n, fact=1;

printf("Enter the number for which you want factorial\n");
scanf("%ld", &n);

if(n<0)
printf("No Factorial for negative numbers\n");

else
while(n>0)
{
fact=fact*n;
n--;
}

printf("Factorial=%ld\n", fact);
}
