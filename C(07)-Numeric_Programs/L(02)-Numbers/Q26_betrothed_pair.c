/* Q.26) Check whether two numbers are betrothed pair or not
A Betrothed Pair (or Betrothed Numbers) consists of two different
positive integers m and n such that the sum of proper divisors of
the first number is 1 more than the second number, and vice versa.

Example: 48 and 75

Proper divisors of 48: 1 + 2 + 3 + 4 + 6 + 8 + 12 + 16 + 24 = 76
And: 75 + 1 = 76

Proper divisors of 75: 1 + 3 + 5 + 15 + 25 = 49
And: 48 + 1 = 49

Therefore, 48 and 75 are Betrothed Numbers. */

#include <stdio.h>

int SumOfProperDivisors(int n)
{
    int i,s=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            s=s+i;
    }

    return s;
}

int main()
{
    int n1,n2,s1,s2;

    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    s1=SumOfProperDivisors(n1);
    s2=SumOfProperDivisors(n2);

    if(s1==n2+1 && s2==n1+1)
        printf("Yes, %d and %d are Betrothed Numbers",n1,n2);
    else
        printf("No, %d and %d are not Betrothed Numbers",n1,n2);

    return 0;
}