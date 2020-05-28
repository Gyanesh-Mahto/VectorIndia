#include<stdio.h>
int main()
{
char c='a';
int i=10;
float f=23.5;

void *p;

p=&c;
printf("%c\n", *(char*)p);
p=&i;
printf("%d\n", *(int*)p);
p=&f;
printf("%f\n", *(float*)p);

}
