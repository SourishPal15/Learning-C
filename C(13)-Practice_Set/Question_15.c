/* Q.15) Check if a given positive integer number is an Armstrong
number or not */

#include <stdio.h>
#include <math.h>

int main()
{
    int n,temp,d,c=0,arm=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n;

    while(temp!=0)
    {
        c++;
        temp=temp/10;
    }

    temp = n;

    while(temp!=0)
    {
        d=temp%10;
        arm = arm + (int)pow(d,c);
        temp=temp/10;
    }

    if(arm==n)
        printf("Yes, %d is a %d digit Armstrong Number",n,c);
    else
        printf("No, %d is not an Armstrong Number", n);

    return 0;
}

/* If that solution does not work, since pow function from math.h
returns a double value, so there might be some complications, then for that
use this solution instead: 

#include <stdio.h>

int power(int base, int exponent)
{
    int result = 1;

    while (exponent != 0)
    {
        result *= base;
        exponent--;
    }

    return result;
}

int main()
{
    int n, temp, d, arm = 0, c = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("%d is not an Armstrong Number", n);
        return 0;
    }

    temp = n;

    while (temp != 0)
    {
        c++;
        temp /= 10;
    }

    temp = n;

    while (temp != 0)
    {
        d = temp % 10;
        arm += power(d, c);
        temp /= 10;
    }

    if (arm == n)
        printf("%d is a %d digit Armstrong Number", n,c);
    else
        printf("%d is not an Armstrong Number", n);

    return 0;
}
    
In this solution we are creating our own user defined power function 
that returns int value therefore no bugs/complications in the code */