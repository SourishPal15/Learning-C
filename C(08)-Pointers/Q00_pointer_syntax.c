/* This program here shows the basic syntax of pointer in C */


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    int *p;

    p = &n;

    printf("Value of n: %d", n);
    printf("\nAddress of n: %p", &n);
    printf("\nValue stored in p: %p", p);
    printf("\nValue pointed by p: %d", *p);

    return 0;
}