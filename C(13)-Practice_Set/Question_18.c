/* Q.18) Compute the prime factors of a positive integer number */

#include <stdio.h>

int CheckPrime(int n)
{
    int c=0, i;

    for(i=1; i<=n; i++)
    {
        if(n%i==0)
            c++;
    }

    if(c==2)
        return 1;
    else
        return 0;
}

int main()
{
    int number, i;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Prime Factors of %d: ", number);

    for(i=1; i<=number; i++)
    {
        if(number % i == 0)
        {
            if(CheckPrime(i) == 1)
                printf("%d ", i);
        }
    }

    return 0;
}