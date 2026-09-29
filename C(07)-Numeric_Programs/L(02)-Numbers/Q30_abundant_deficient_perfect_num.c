/* Q.30) Check whether a number is Abundant, Deficient, or Perfect

An Abundant Number is a number whose sum of proper divisors
is greater than the number itself.

Example:
12 -> Proper divisors: 1, 2, 3, 4, 6
12 -> Sum = 16
Since 16 > 12, 12 is an Abundant Number.

A Deficient Number is a number whose sum of proper divisors
is less than the number itself.

Example:
8 -> Proper divisors: 1, 2, 4
8 -> Sum = 7
Since 7 < 8, 8 is a Deficient Number.

A Perfect Number is a number whose sum of proper divisors
is equal to the number itself.

Example:
6 -> Proper divisors: 1, 2, 3
6 -> Sum = 6
Therefore, 6 is a Perfect Number. */

#include <stdio.h>

int main()
{
    int n,i,s=0;

    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            s=s+i;
    }

    if(s>n)
        printf("%d is an Abundant Number",n);
    else if(s<n)
        printf("%d is a Deficient Number",n);
    else
        printf("%d is a Perfect Number",n);

    return 0;
}