#include<stdio.h>
int main()
{
int k=20;
int *p;
p=&k;
printf("*p=%d\np=%d\nk=%d\n&k=%d\np=%u\n", *p, p, k, &k, &p);
k=30;
printf("*p=%d\np=%d\nk=%d\n&k=%d\np=%u\n", *p, p, k, &k, &p);
*p=40;
printf("*p=%d\np=%d\nk=%d\n&k=%d\np=%u\n", *p, p, k, &k, &p);
}
