/* Q.5) Write a recursive function to find the number at a specific INDEX in 
the fibonacci series 

Suppose: N=6
Fibonacci Series= 0 1 1 2 3 5 8 13 21.....
INDEX VALUES=     0 1 2 3 4 5 6 7  8......

So, at N=6, the program should print '8' since '8' is the 6th INDEX in 
the Fibonaaci series

NOTE: The question says index not Nth term, and indexing starts from 0 */

#include <stdio.h>

int FibonacciIndex(int i)
{
    if(i==0)
        return 0;

    if(i==1)
        return 1;

    return FibonacciIndex(i-1) + FibonacciIndex(i-2);
}

int main()
{
    int n;
    printf("Enter the index value: ");
    scanf("%d", &n);

    printf("%d is at the %d number index in the Fibonacci series", FibonacciIndex(n),n);

    return 0;
}