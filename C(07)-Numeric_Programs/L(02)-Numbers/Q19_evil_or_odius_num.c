/* Q.19) Check whether a number is evil number or odius number

An Evil number has an even number of 1s in its binary representation.
Example: 9 = 1001₂, which contains two 1s.

An Odious number has an odd number of 1s in its binary representation.
Example: 7 = 111₂, which contains three 1s. */

#include <stdio.h>

int DecimalToBinary(int n)
{
    int bin=0,place=1,remainder;
    while(n!=0)
    {
        remainder = n % 2;
        bin = bin + (remainder * place);
        place = place * 10;
        n = n / 2;
    }
    return bin;
}

int CountOnes(int n)
{
    int d,c=0;
    while(n!=0)
    {
        d = n % 10;
        if(d==1)
            c++;
        
        n = n / 10;
    }
    return c;
}

int EvenOrOdd(int n)
{
    if(n%2==0)
        return 1; // returns 1 if even 
    else
        return 0; // returns 0 if odd
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(EvenOrOdd(CountOnes(DecimalToBinary(n)))==1)
        printf("%d is an Evil Number",n);
    else
        printf("%d is an Odius Number",n);

    return 0;
}