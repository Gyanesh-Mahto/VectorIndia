#include<stdio.h>
int main()
{
int *ip, i, j, k;
float f=3.5;
char*cp;

ip=(int*) &f;
cp=(char*) &f;

for(i=31; i>=0; i--)
{
printf("%d", *ip>>i&1);
}
printf("\n");

for(j=0; j<4; j++)
{
for(k=7; k>=0; k--)
{
printf("%d", *cp>>k&1);
cp=cp-1;
}
}
printf("\n");
}
