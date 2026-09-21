/* Q.11) Write a program to take a number as input and show its
absolute value. */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>=0)
        printf("Absolute value of %d is= %d", n,n);
    else
        printf("Absolute value of %d is= %d",n,-n);

    return 0;
}