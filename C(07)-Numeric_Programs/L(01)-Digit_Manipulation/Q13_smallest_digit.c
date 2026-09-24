/* Q.12) Find the smallest digit and its position in a number */

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
    int n,temp,d,smallest=9,c=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n>=0 && n<=9)
    {
        printf("You have entered %d which is a single digit",n);
        return 0;
    }

    temp = reverse(n);

    while(temp!=0)
    {
        d = temp%10;

        if(d<smallest)
            smallest = d;
            
        temp = temp/10;
    }

    printf("Smallest Digit in %d = %d\n", n,smallest);

    temp = reverse(n);

    while(temp!=0)
    {
        d=temp%10;
        c++;
        if(d==smallest)
            printf("%d is at position %d\n", smallest,c);

        temp=temp/10;
    }

    return 0;
}