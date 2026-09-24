/* Q.2) Take a number and find the sum and product of its digits */

#include <stdio.h>

int main()
{
    int n,temp,d,s=0,p=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp!=0)
    {
        d=temp%10;
        s=s+d;
        p=p*d;
        temp=temp/10;
    }

    printf("Sum of the digits of %d is = %d", n,s);
    printf("\nProduct of the digits of %d is = %d", n,p);

    return 0;
}