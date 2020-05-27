/*Program to print biggest and smallest number from array*/

#include<stdio.h>
int main()
{

int n, big, i, ele, small;
/*Taking input from user*/
printf("Enter the count of elements you want to enter\n");
scanf("%d", &n);

int a[n];
ele=sizeof(a)/sizeof(a[0]);	/*Counting total elements*/

/*Taking elements from user*/
printf("Enter the elements\n");
for(i=0; i<ele; i++)
scanf("%d", &a[i]);

/*Printing the elements*/
printf("Following are the elements entered\n");
for(i=0; i<ele; i++)
printf("%d\t", a[i]);
printf("\n");

/*Biggest and smallest number logic*/
big=a[0];
small=a[0];
for(i=0; i<ele; i++)
{
if(a[i]>big)
big=a[i];
if(a[i]<small)
small=a[i];
}

/*Printing Biggest and smallest numbers*/
printf("Biggest number=%d\n", big);
printf("Smallest number=%d", small);
printf("\n");
}
