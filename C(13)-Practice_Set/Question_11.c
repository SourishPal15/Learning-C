/* Q.11) Write a C program to determine all the prime numbers in a given range */

#include <stdio.h>

int CheckPrime(int n)
{
    int i, c=0;

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

int main()
{
    int lower, upper, i;
    printf("Enter lower and upper limits of range: ");
    scanf("%d %d", &lower, &upper);

    if(lower>upper) // edge case where if the user inputs it incorrectly
    {
        int temporary; // we will swap the values of upper and lower using third variable

        temporary = lower;
        lower = upper;
        upper = temporary;
    }
    else if(lower == upper)
    {
        printf("Enter range properly, upper and lower limit cannot be equal!");
        return 0;
    }

    printf("Prime Numbers in range [%d,%d]: ", lower,upper);

    for(i = lower; i <= upper; i++)
    {
        if(CheckPrime(i)==1)
            printf("%d ", i);
    }

    return 0;
}