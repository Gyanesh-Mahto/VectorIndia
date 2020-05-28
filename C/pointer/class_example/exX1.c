#include<stdio.h>
int main()
{
int *p, i=10;
char *cp, c='a';
p=&i;
cp=&c;
printf("P data: %lu\n", p);

p=p+1;

printf("P data: %lu, *P: %d\n", p, *p);

printf("cp data: %lu\n", cp);

cp=cp+1;

printf("cp data: %lu, *cp: %c\n", cp, *cp);


}
