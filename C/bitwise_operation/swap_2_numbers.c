//WAP to swap two numbers using bitwise operators.

#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter first number\n");
    scanf("%d", &n1);
    printf("Enter second number\n");
    scanf("%d", &n2);
    n1=n1^n2;
    n2=n2^n1;
    n1=n1^n2;
    printf("After swapping: n1=%d, n2=%d\n", n1, n2);
}