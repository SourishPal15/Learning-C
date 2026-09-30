/* Q.5) Write a C program demonstrating a pointer to a pointer.
Store an integer in n, make a pointer p point to n, and make
another pointer q point to p. Print the value of n using n,
*p, and **q  */

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int *p = &n;
    int **q = &p;

    printf("The value of n: %d, address of n: %p\n",
           n, (void *)&n);

    printf("The value of p: %p, address of p: %p\n",
           (void *)p, (void *)&p);

    printf("The value of q: %p, address of q: %p\n",
           (void *)q, (void *)&q);

    printf("\nValue using n   = %d", n);
    printf("\nValue using *p  = %d", *p);
    printf("\nValue using **q = %d", **q);

    return 0;
}