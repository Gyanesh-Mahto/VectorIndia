//Print binary of float number

#include<stdio.h>
int main()
{
float f=3.5, *fp;
int *ip=(int*) &f, i;
for(i=31; i>=0; i--)
{
printf("%d", *ip>>i&1);
}
printf("\n");
}
