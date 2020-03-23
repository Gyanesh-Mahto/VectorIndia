//SUM OF DIGITS:---->

#include<stdio.h>

int main()
{
int n, i, r, temp, sod=0;

printf("Enter the number\n");
scanf("%d", &n);

temp=n;

for(;n;)
{
r=n%10;
sod=sod+r;
n=n/10;
}

printf("SOD=%d\n", sod);
}