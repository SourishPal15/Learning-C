/* Q.13) Check whether a number is Disarium number or not,
A Disarium number is a number equal to the sum of its digits
raised to their respective positions.

Example: 135 = 1¹ + 3² + 5³. */

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

int reverse(int n)
{
    int rev=0,d;
    while(n!=0)
    {
        d=n%10;
        rev=(rev*10)+d;
        n=n/10;
    }
    return rev;
}

int main()
{
    int n,temp,d,c=0,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = reverse(n);

    while(temp!=0)
    {
        d = temp % 10;
        c++;
        s = s + power(d,c);
        temp = temp / 10;
    }

    if(s==n)
        printf("Yes, %d is a Disarium number",n);
    else
        printf("No, %d is not a Disarium number",n);

    return 0;
}