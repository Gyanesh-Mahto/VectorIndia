

#include<stdio.h>

void sum_max_fun(int p, int q, int r, int *s, int *t)
{
*s=p+q+r;

if(p>q && p>r)
	*t=p;
else if(q>r)
	*t=q;
else
	*t=r;
}

int main()
{
int a, b, c, sum, max;

printf("Enter 3 numbers\n");
scanf("%d%d%d", &a, &b, &c);

sum_max_fun(a, b, c, &sum, &max);

printf("The sum of all 3 numbers is %d\n", sum);
printf("The maximum of all 3 numbers is %d\n", max);
}
