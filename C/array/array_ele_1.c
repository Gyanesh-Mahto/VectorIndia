#include<stdio.h>
int main()
{
int a[5], ele, i;
ele=sizeof(a)/sizeof(a[0]);

printf("Enter the elements in an array\n");
for(i=0; i<ele; i++)
scanf("%d", &a[i]);

printf("Following are the elements in an array\n");

for(i=0; i<ele; i++)
printf("%d", a[i]);

printf("\n");
}
