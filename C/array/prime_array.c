#include<stdio.h>

int main()
{
int a[5], i, j, ele;

ele=sizeof(a)/sizeof(a[0]);

printf("Enter elements\n");

for(i=0; i<ele; i++)
scanf("%d", &a[i]);

for(i=0; i<ele; i++)
{
for(j=2; j<a[i]; j++)
{
if(a[i]%j==0)
break;
}
if(a[i]==j)
printf("%d", a[i]);
}
}
