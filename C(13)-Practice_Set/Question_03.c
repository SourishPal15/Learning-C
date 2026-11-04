/* Q.3) Write a C program to swap two numbers without using a third variable */

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Numbers before swapping: %d and %d", a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nNumbers after swapping: %d and %d", a,b);

    return 0;
}