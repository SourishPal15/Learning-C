/* Q.28) Check whether a number is a Taxicab Number
A Taxicab Number is a number that can be expressed as the
sum of two positive cubes in two different ways.

Example:
1729 = 1³ + 12³
     = 9³ + 10³

Since 1729 can be expressed as the sum of two positive cubes
in two different ways, 1729 is a Taxicab Number. */

#include <stdio.h>

int IsTaxicab(int n)
{
    int a,b,c,d;
    int count=0;

    for(a=1;a*a*a<n;a++)
    {
        for(b=a+1;b*b*b<n;b++)
        {
            if(a*a*a + b*b*b == n)
            {
                count++;
            }
        }
    }

    if(count>=2)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d",&n);

    if(IsTaxicab(n)==1)
        printf("Yes, %d is a Taxicab Number",n);
    else
        printf("No, %d is not a Taxicab Number",n);

    return 0;
}