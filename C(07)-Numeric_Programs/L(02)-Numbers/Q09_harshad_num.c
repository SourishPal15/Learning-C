/* Q.9) Check whether a number is harshad number or not, a harshad 
number is a number which is divisible by the sum of its digits

Example: 18 => 1 + 8 = 9, and 18 is divisible by 9 */

#include <stdio.h>

int main()
{
    int n,temp,d,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n;

    while(temp!=0)
    {
        d = temp%10;
        s = s + d;
        temp = temp/10;
    }

    if(n%s==0)
        printf("Yes, %d is a Harshad Number", n);
    else
        printf("No, %d is not a Harshad Number", n);

    return 0;
}