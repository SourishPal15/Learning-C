/* Q.4) Write a program to take a number as input, and then take two other numbers as 
inputs and then check whether that first number that has been entered is divisible 
by BOTH the other numbers. */

#include <stdio.h>

int main()
{
    int a,n1,n2;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter two numbers to check if %d is divisible by both: ",a);
    scanf("%d %d", &n1,&n2);

    if(a%n1==0 && a%n2==0)
        printf("Yes, %d is divisible by both %d and %d",a,n1,n2);
    else
        printf("No, %d is not divisible by both %d and %d",a,n1,n2);

    return 0;
}
