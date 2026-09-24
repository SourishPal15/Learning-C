/* Q.8) Check whether a number is Strong number or not, a strong 
number is a number whose sum of the factorial of its digits is
equal to the number 

Example: 145 = 1! + 4! + 5! */

#include <stdio.h>

int factorial(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int n,temp,d,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n; 

    while(temp!=0)
    {
        d = temp % 10;
        s = s + factorial(d);
        temp = temp / 10;
    }

    if(s==n)
        printf("Yes, %d is a Strong Number",n);
    else
        printf("No, %d is not a Strong Number", n);

    return 0;
}