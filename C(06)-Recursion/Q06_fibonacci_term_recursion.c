/* Q.6) Write a recursive function to find the number at a specific TERM in 
the fibonacci series 

Suppose: N=6
Fibonacci Series= 0 1 1 2 3 5 8 13 21.....
TERM VALUES=      1 2 3 4 5 6 7 8  9......

So, at N=6, the program should print '5' since '5' is the 6th TERM in 
the Fibonaaci series

NOTE: The question says Nth TERM not index, and we count terms from 1 */

#include <stdio.h>

int FibonacciTerm(int t)
{
    if(t==1 || t==2)
        return t-1;

    return FibonacciTerm(t-1) + FibonacciTerm(t-2);
}

int main()
{
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);

    printf("%d is at the %d number term in the Fibonacci Series", FibonacciTerm(n),n);

    return 0;
}