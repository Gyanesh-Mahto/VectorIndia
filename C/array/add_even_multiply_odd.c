/*C program to input 10 numbers through the keyboard into an array and display the results of addition of even numbers and product of odd 
numbers.*/

#include<stdio.h>
int main()
{
	int n, b, ele, i, j, sum=0, mul=1;

	printf("Enter the count of elements you want to enter\n");
	scanf("%d", &n);

	int a[n];

	ele=sizeof(a)/sizeof(a[0]);

	printf("Enter the elements in the array\n");
	for(i=0; i<ele; i++)
		scanf("%d", &a[i]);

	printf("The elements entered are as follows:\n");
	for(i=0; i<ele; i++)
		printf("%d\t", a[i]);
	printf("\n");

	for(i=0; i<ele; i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ", a[i]);
			sum=sum+a[i];
		}

		else
		{
			printf("%d ", a[i]);
			mul=mul*a[i];
		}
	}
	printf("\n");
	if(sum>0)
		printf("Total sum of even numbers entered are: %d\n", sum);
	else
		printf("Only Odd numbers are entered\n");

	if(mul>1)
		printf("Total product of odd numbers entered are: %d\n", mul);
	else
		printf("Only even numbers were entered\n");
}
