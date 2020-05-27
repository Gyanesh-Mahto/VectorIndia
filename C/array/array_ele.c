#include<stdio.h>
int main()
{
int a[5]={1, 3, 5}, ele;
ele=sizeof(a)/sizeof(a[0]);
printf("%d\n%d\nele=%d\n", a[3], a[4], ele);
}
