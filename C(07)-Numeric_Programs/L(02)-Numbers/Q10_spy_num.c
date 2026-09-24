/* Q.10) Check whether a number is spy number or not, a spy number
is a number whose sum of digits is equal to the product of 
its digits 

Example: 123, where 1+2+3=1*2*3 that is eqaul to 6 */

#include <stdio.h>

int main()
{
    int n,temp,d,s=0,p=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n;

    while(temp!=0)
    {
        d = temp%10;
        s = s + d;
        p = p * d;
        temp = temp/10;
    }

    if(s==p)
        printf("Yes, %d is a Spy Number", n);
    else
        printf("No, %d is not a Spy Number", n);

    return 0;
}