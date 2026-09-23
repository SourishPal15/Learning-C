/* Q.2) Using recursion find the sum of numbers from 1 to N */

#include <stdio.h>

int sum(int n)
{
    if(n == 0)
        return 0;

    return n + sum(n - 1);
}

int main()
{
    int n;

    printf("Enter the term N: ");
    scanf("%d", &n);

    printf("Sum = %d", sum(n));

    return 0;
}