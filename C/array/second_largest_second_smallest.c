#include<stdio.h>
int main()
{
int n, i, j, ele, small, big, second_small, second_big;

printf("Enter total numbers of elements you want to enter\n");
scanf("%d", &n);

int a[n];

ele=sizeof(a)/sizeof(a[0]);

printf("Enter elements in array\n");

for(i=0; i<ele; i++)
scanf("%d", &a[i]);

printf("The elements entered are as follows:\n");
for(i=0; i<ele; i++)
printf("%d\t", a[i]);

printf("\n");

big=a[0];
small=a[0];

for(i=0; i<ele; i++)
{
if(big<a[i])
big=a[i];
}

second_big=a[0];
for(i=0; i<ele; i++)
{
if(second_big<a[i]&&second_big<big)
second_big=a[i];
}
/*
if(small>a[i])
{

small=a[i];

}
*/
printf("\n");

printf("The biggest number is %d\n", big);
printf("The smallest number is %d\n", small);
printf("Second biggest element in the array is %d\n", second_big);
printf("Second smallest element in the array is %d\n", second_small);
}
