/* Q.8) Take a number and count the number of zeros in it */

#include <stdio.h>

int main()
{
    int n,temp,d,c=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    if(n==0)
    {
        printf("You have entered 0, so only 1 zero is present");
        return 0;
    }

    while(temp!=0)
    {
        d=temp%10;

        if(d==0)
            c++;

        temp=temp/10;
    }

    if(c>0)
        printf("%d has %d zero(s) present in it", n,c);
    else
        printf("%d has no zero(s) present in it",n);

    return 0;
}