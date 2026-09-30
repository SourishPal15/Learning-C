/* Q.3) Write a program to swap two numbers using pointer 
(can use a third variable for swapping) */

#include <stdio.h>

int main()
{
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);

    int *p1=&a, *p2=&b;

    printf("Numbers before swapping: %d %d\n", *p1, *p2);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp; 

    printf("Numbers after swapping: %d %d", *p1, *p2);

    return 0;
}