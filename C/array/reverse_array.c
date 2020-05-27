/*Generic Array Reversal Program*/

#include<stdio.h>
int main()
{
int n, /*a[n],*/ ele, i=0, j=0, t;                               /* Here we want to take input for count of numbers from user*/

printf("Enter the count of numbers you want to enter\n");        /*Taking count from user*/
scanf("%d", &n);					 
int a[n];							/*Assigning count number from user count to array elements*/

ele=sizeof(a)/sizeof(a[0]);					/*Total elements count*/

printf("Please enter n numbers\n");				/*Taking elements from user*/
for(i=0; i<ele; i++)
scanf("%d", &a[i]);

printf("All integers enetered are as follows\n");		/*Printing the elements from user*/
for(i=0; i<ele; i++)
printf("%d\t", a[i]);
printf("\n");

for(i=0, j=ele-1;i<j; i++, j-- )				/*Reversing the array*/
{
t=a[i];
a[i]=a[j];
a[j]=t;
}

printf("After reversal of array, Below are the elements arrangement\n");	/*Printing reversed elements*/
for(i=0; i<ele; i++)
printf("%d\t", a[i]);
printf("\n");
}
