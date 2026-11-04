/* Q.6) Write a C program to determine whether a number is odd or even */

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if(number % 2 == 0)
        printf("%d is an Even Number", number);
    else
        printf("%d is an Odd Number", number);

    return 0;
}