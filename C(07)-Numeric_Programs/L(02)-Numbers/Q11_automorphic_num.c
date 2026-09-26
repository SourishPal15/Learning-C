/* Q.11) Check whether a number is automorphic number or not
An Automorphic number is a number whose square ends with the number itself.

Example: 25² = 625. */

/* In this solution, pow() function from <math.h> can also
be used instead of manually making a power function */

#include <stdio.h>

int power(int b, int e)
{
    int i,result=1;
    for(i=1;i<=e;i++)
    {
        result=result*b;
    }
    return result;
}

int main()
{
    int n,temp,sq,x,c=0;

    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n;
    temp = n;

    while(temp != 0)
    {
        c++;
        temp = temp / 10;
    }

    x = sq % power(10,c);

    if(x == n)
        printf("Yes, %d is an Automorphic Number",n);
    else
        printf("No, %d is not an Automorphic Number",n);

    return 0;
}