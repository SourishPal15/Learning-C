/* Q.5) Chceck whether a number is Palindrome number or not,
a palindrome number is a number whose reverse is same as the
number itself 

Example:  121, reverse of 121 is 121 so its palindrome 
          123, reverse of 123 is 321 so its not palindrome */

#include <stdio.h>

int main()
{
    int n,temp,d,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp=n;

    while(temp!=0)
    {
        d=temp%10;
        rev=(rev*10)+d;
        temp=temp/10;
    }

    printf("%d in Reverse is = %d\n", n,rev);

    if(rev==n)
        printf("Yes, %d is a Palindrome Number", n);
    else
        printf("No, %d is not a Palindrome Number", n);

    return 0;
}