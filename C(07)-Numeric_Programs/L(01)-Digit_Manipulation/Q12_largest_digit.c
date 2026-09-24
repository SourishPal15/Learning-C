/* Q.12) Find the largest digit and its position in a number */

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
    int n,temp,d,largest=0,c=0;
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

        if(d>largest)
            largest = d;
            
        temp = temp/10;
    }

    printf("Largest Digit in %d = %d\n", n,largest);

    temp = reverse(n);

    while(temp!=0)
    {
        d=temp%10;
        c++;
        if(d==largest)
            printf("%d is at position %d\n", largest,c);

        temp=temp/10;
    }

    return 0;
}