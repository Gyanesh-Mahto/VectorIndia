#include<stdio.h>

void swap(int* x, int* y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

int main()
{
int a, b;

printf("Enter 2 Numbers\n");
scanf("%d %d", &a, &b);
printf("Before swapping\n");
printf("a=%d and b=%d\n", a, b);

swap(&a, &b);
printf("After swapping\n");
printf("a=%d and b=%d\n", a, b);
}
