/* Q.16) Write a program to use the collatz sequence 
The Collatz sequence starts with any positive integer n.

Then repeatedly apply these rules:

If n is even: n = n/2
If n is odd:  n = 3n+1 

Continue until you reach 1.

Example: n = 13
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

Let's check:

13 is odd  → 3(13)+1 = 40
40 is even → 40/2 = 20
20 is even → 20/2 = 10
10 is even → 10/2 = 5
5 is odd   → 3(5)+1 = 16
...

Why is it interesting?

The rule is extremely simple, but the resulting sequence can
behave unpredictably.

The Collatz conjecture states that starting from any positive integer,
repeatedly applying these rules eventually reaches 1.
It has not been proved for all positive integers. */

#include <stdio.h>

int main()
{
    int n,c=0,temp;

    printf("Enter a positive number to start Collatz Sequence: ");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Please enter a positive integer.");
        return 0;
    }

    temp = n;

    while(n!=1)
    {
        c++;

        if(n%2==0)
            n = n/2;
        else
            n = (3*n) + 1;
    }

    printf("The collatz sequence takes %d steps before reaching 1, for %d",c,temp);

    return 0;
}