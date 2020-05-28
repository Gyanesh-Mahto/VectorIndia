#include<stdio.h>
int main()
{
char ch='a', *cp;
int i=10, *ip;
float f=22.7, *fp;

printf("char_size=%d\nint_size=%d\nfloat_size=%d\n", sizeof(ch), sizeof(i), sizeof(f));

printf("char_pointer_size=%d\nint_pointer_size=%d\nfloat_pointer_size=%d\n", sizeof(cp), sizeof(ip), sizeof(fp));
}
