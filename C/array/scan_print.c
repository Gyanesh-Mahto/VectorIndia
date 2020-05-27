#include<stdio.h>

int main()
{
int a[10], i, ele;
ele=sizeof(a)/sizeof(a[0]);
printf("Enter any element\n");
for(i=0; i<ele; i++)
scanf("%d", &a[i]);

printf("The elements entered are as follows\n");
for(i=0; i<ele; i++)
printf("%d", a[i]);
printf("\n");
}
