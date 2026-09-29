/* Q.23) Check whether a number is powerful number or not
A Powerful number is a number in which every prime factor occurs
with an exponent of at least 2. 

Example: 36 = 2² × 3². */

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

int IsPowerful(int n)
{
    int i,count;

    for(i=2;i<=n;i++)
    {
        if(n%i==0 && CheckPrime(i)==1)
        {
            count=0;

            while(n%i==0)
            {
                count++;
                n=n/i;
            }

            if(count<2)
                return 0;
        }
    }

    return 1;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(IsPowerful(n)==1)
        printf("Yes, %d is a Powerful Number",n);
    else
        printf("No, %d is not a Powerful Number",n);

    return 0;
}