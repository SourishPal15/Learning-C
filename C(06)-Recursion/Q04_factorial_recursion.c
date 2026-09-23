/* Q.4) Using a recursive function, find the factorial of a numberr */

#include <stdio.h>

int factorial(int n)
{
    if(n==0)
        return 1;

    return n * factorial(n-1);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial of %d= %d", n,factorial(n));

    return 0;
}