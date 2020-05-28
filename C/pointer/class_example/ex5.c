#include<stdio.h>
int main()
{
float f=3.5, *fp;
int *ip;

fp=&f;
ip=(int*) &f;

printf("*ip=%d\n*fp=%f\n", *ip, *fp);
}
