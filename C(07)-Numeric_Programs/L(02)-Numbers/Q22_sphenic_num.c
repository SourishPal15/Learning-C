/* Q.22) Check whether a number is Sphenic Number or not,
A Sphenic number is the product of exactly three distinct prime numbers.

Example: 30 = 2 × 3 × 5. */

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

int CountPrimeFactors(int n)
{
    int i,c=0;

    for(i=2;i<=n;i++)
    {
        if(n%i==0 && CheckPrime(i)==1)
        {
            c++;
        }
    }

    return c;
}

int IsSphenic(int n)
{
    int i,c=0;

    for(i=2;i<=n;i++)
    {
        if(n%i==0 && CheckPrime(i)==1)
        {
            c++;

            if(n%(i*i)==0)
                return 0;
        }
    }

    if(c==3)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(IsSphenic(n)==1)
        printf("Yes, %d is a Sphenic Number",n);
    else
        printf("No, %d is not a Sphenic Number",n);

    return 0;
}