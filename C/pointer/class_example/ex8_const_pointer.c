#include<stdio.h>
int main()
{
/*
const int *p;
printf("*p=%d\n", *p);
*/
int j=35;
int *const p=&j;
printf("*p=%d\n", *p);
int i=10;
*p=&i;
printf("i=%d\n*p=%d\n", i, *p);


}
