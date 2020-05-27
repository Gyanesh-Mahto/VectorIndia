/*Generic Prime Number Program in Array*/

#include<stdio.h>
int main()
{
int n, i=0, k=0, ele, c=0;

/*Taking count of elements from user*/
printf("Enter the number of elements you want to enter\n");
scanf("%d", &n);

int a[n];	/*Defining  Array*/
/*Defining array size*/
ele=sizeof(a)/sizeof(a[0]);

/*Taking elements input from user*/
printf("Enter the elements\n");
for(i=0; i<ele; i++)
scanf("%d", &a[i]);

/*Printing elements entered in the array*/
printf("Entered elements are as follows:\n");
for(i=0; i<ele; i++)
printf("%d", a[i]);
printf("\n");

/*Ligic to find prime numbers*/
printf("The Prime numbers are as follows from the list:\n");
for(i=0; i<ele; i++)
{

for(k=2, c=0; k<a[i]; k++)
{
if(a[i]%k==0)
break;
}
if(a[i]==k)
{
c++;
printf("%d\t", a[i]);
}
}
/*If NO PRIME Numners are found then show error message*/
if (c<1)
printf("SORRY!!!No Prime numbers are present from list:(\n");
printf("\n");
}
