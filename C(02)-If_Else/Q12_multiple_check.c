/* Q.12) Write a program to take a number as input and then take another number as 
input and check whether that first number is a multiple of second number or not */

#include <stdio.h>

int main()
{
    int mul,divisor;
    printf("Enter a number: ");
    scanf("%d", &mul);
    printf("Enter a number to check if %d is its multiple: ",mul);
    scanf("%d",&divisor);

    if(mul%divisor==0)
        printf("Yes, %d is a multiple of %d", mul,divisor);
    else
        printf("No, %d is not a multiple of %d", mul,divisor);

    return 0;
}