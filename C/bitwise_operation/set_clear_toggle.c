/*1.  Write a program for the following one.
      a) Set a bit      b) Clear a bit    c) Toggle a bit
*/

#include<stdio.h>
int main()
{
    int n, pos;
    printf("Please enter a number\n");
    scanf("%d", &n);
    printf("Binary of the number\n");
    for(int i=31; i>=0; i--)
    printf("%d", n>>i&1);
    printf("\n");
    printf("Enter the position which you want to set\n");
    scanf("%d", &pos);
    n=n|(1<<pos);
    printf("Binary of the number after setting a bit\n");
    for(int i=31; i>=0; i--)
    printf("%d", n>>i&1);
    printf("\n");
    printf("Enter the position which you want to clear\n");
    scanf("%d", &pos);
    n=n&~(1<<pos);
    printf("Binary of the number after clearing a bit\n");
    for(int i=31; i>=0; i--)
    printf("%d", n>>i&1);
    printf("\n");
    printf("Enter the position which you want to compliment\n");
    scanf("%d", &pos);
    n=n^(1<<pos);
    printf("Binary of the number after complimenting a bit\n");
    for(int i=31; i>=0; i--)
    printf("%d", n>>i&1);
    printf("\n");
}