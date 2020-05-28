//LITTLE ENDIAN & BIG ENDIAN

#include<stdio.h>
int main()
{
int i=1;
char *cp;
cp=(char*)&i;

if(*cp==1)
printf("Little Endian\n");

else
printf("Big  Endian\n");
}
