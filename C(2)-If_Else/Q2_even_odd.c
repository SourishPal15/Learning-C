/* Q.2) Write a program to take a number as input and check whether that number is
even or odd */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2==0)
        printf("%d is an Even Number",n);
    else
        printf("%d is an Odd Number",n);

    return 0;
}