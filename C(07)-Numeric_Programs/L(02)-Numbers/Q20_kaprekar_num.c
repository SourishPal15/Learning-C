/* Q.20) Check whether a number is kaprekar number or not
A Kaprekar number is a number whose square can be divided into
two parts whose sum equals the original number.

Example: 45² = 2025 → 20+25 = 45 */

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
    int n,temp,sq,c=0,d;
    printf("Enter a number: ");
    scanf("%d",&n);

    sq = n * n;
    temp = n;

    while(temp!=0)
    {
        c++;
        temp = temp / 10;
    }

    int x1,x2;

    x1 = sq / power(10,c);
    x2 = sq % power(10,c);

    if(x1+x2==n)
        printf("Yes, %d is a Kaprekar Number",n);
    else
        printf("No, %d is not a Kaprekar Number",n);

    return 0;
}