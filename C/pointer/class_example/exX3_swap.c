#include<stdio.h>
void swap(int *p, int *q)
{
int r;
r=*p;
*p=*q;
*q=r;

}

int main()
{

int a=100, b=200;

swap(&a, &b);

printf("a=%d, b=%d\n", a, b);
}
