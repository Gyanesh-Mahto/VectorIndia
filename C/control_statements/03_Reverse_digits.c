#include<stdio.h>
int main()
{
    int n, rev=0;
    printf("Please enter any number\n");
    scanf("%d", &n);

    while(n>0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    printf("Reversed num=%d\n", rev);
}