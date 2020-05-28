#include<stdio.h>
int main()
{
int *ip, i=258;
char *cp;

ip=&i;
cp=(char*)&i;

printf("ip=%u, ip+1=%u\n", ip, ip+1);
printf("cp=%u, cp+1=%u\n", cp, cp+1);
printf("*ip=%d, *ip+1=%d\n", *ip, *ip+1);
printf("*cp=%d, *cp+1=%d\n", *cp, *cp+1);
}
