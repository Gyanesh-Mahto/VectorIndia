#include<stdio.h>
int main()
{
int a[10], i, j, ele, temp;
ele=sizeof(a)/sizeof(a[0]);

printf("Enter any 10 numbers\n");
for(i=0; i<ele; i++)
scanf("%d", &a[i]);

printf("The numbers enetered are: \n");
for(i=0; i<ele; i++)
printf("%d  ", a[i]);
printf("\n");

for(i=0, j=ele-1; i<j; i++, j--)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}

printf("After reversing the numbers are as follows:\n");
for(i=0; i<ele; i++)
printf("%d  ", a[i]);

}

