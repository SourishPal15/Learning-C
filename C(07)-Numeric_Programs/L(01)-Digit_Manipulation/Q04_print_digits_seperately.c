/* Q.4) Take a number as input and print the digits of the number
seperately */

#include <stdio.h>

int reverse(int n)
{
    int d,r=0;

    while(n!=0)
    {
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    return r;
}

int main()
{
    int n,d,temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp=reverse(n);

    printf("Digits of %d are: ",n);

    while(temp!=0)
    {
        d=temp%10;
        printf("%d ",d);
        temp=temp/10;
    }

    return 0;
}