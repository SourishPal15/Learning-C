/* Q.1) Write a program to take a number as input from the user and check and print whether
that number is positive or negative or zero. */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>0)
        printf("%d is a Positive number",n);
    else if(n<0)
        printf("%d is a Negative number",n);
    else
        printf("%d is Zero",n);

    return 0;
}