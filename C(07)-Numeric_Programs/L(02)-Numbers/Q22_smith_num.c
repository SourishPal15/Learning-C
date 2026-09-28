/* Q.22) Check whether a number is smith number or not
A Smith number is a composite number whose sum of digits
equals the sum of the digits of its prime factors, counting
factors according to their multiplicity.

Example: 666

Sum of digits: 6 + 6 + 6 = 18

Prime factorization: 666 = 2 × 3 × 3 × 37

Sum of digits of prime factors: 2 + 3 + 3 + (3 + 7)
                                = 2 + 3 + 3 + 10 = 18

Both sums are equal, so 666 is a Smith number.
Usually, Smith numbers are considered composite numbers,
so primes themselves are not counted. */

#include <stdio.h>

int CheckPrime(int n)
{
    int c=0,i;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }

    if(c==2)
        return 1;
    else
        return 0;
}

int SumOfDigits(int n)
{
    int s=0,d;

    while(n!=0)
    {
        d = n % 10;
        s = s + d;
        n = n / 10;
    }

    return s;
}

int PrimeFactors(int n)
{
    int i,s=0;

    for(i=2;i<=n;i++)
    {
        if(CheckPrime(i)==1)
        {
            while(n%i==0)
            {
                s = s + SumOfDigits(i);
                n = n / i;
            }
        }
    }

    return s;
}

int main()
{
    int n,s1,s2;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(CheckPrime(n)==1)
    {
        printf("No, %d is not a Smith Number",n);
        return 0;
    }

    s1 = SumOfDigits(n);
    s2 = PrimeFactors(n);

    if(s1==s2)
        printf("Yes, %d is a Smith Number",n);
    else
        printf("No, %d is not a Smith Number",n);

    return 0;
}