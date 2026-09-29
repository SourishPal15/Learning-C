/* Q.27) Check whether a number is an Ugly Number,
An Ugly Number is a positive number whose only prime factors
are 2, 3, and 5.

Example:
12 = 2 × 2 × 3
Since its prime factors are only 2 and 3, 12 is an Ugly Number.

30 = 2 × 3 × 5
30 is also an Ugly Number.

14 = 2 × 7
Since 7 is not allowed, 14 is not an Ugly Number. */

#include <stdio.h>

int IsUgly(int n)
{
    while(n%2==0)
        n=n/2;

    while(n%3==0)
        n=n/3;

    while(n%5==0)
        n=n/5;

    if(n==1)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<=0)
        printf("Please enter a positive number.");
    else if(IsUgly(n)==1)
        printf("Yes, %d is an Ugly Number",n);
    else
        printf("No, %d is not an Ugly Number",n);

    return 0;
}