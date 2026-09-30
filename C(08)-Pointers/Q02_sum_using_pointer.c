/* Q.2) Write a program to find the sum of two entered numbers 
using pointers */

#include <stdio.h>

int main()
{
    int a,b,sum; 
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    int *p1=&a, *p2=&b;

    sum = *p1 + *p2; 

    printf("The sum of %d and %d is = %d", *p1,*p2,sum);

    return 0;
}