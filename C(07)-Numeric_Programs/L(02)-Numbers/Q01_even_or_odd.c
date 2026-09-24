/* Q.1) Write a program to check whether a number is even or not */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n%2==0)
        printf("%d is an Even Number", n);
    else
        printf("%d is an Odd Number", n);

    return 0;
}