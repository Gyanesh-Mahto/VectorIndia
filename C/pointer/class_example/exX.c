#include<stdio.h>
int main()
{
int *p;
float *q;
double *r;
char *s;

printf("%lu%lu%lu%lu\n", sizeof(p), sizeof(q), sizeof(r), sizeof(s));
printf("%lu%lu%lu%lu\n", sizeof(*p), sizeof(*q), sizeof(*r), sizeof(*s));
}
