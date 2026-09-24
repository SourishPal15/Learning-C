/* Q.7) Take a number, count the number of even digits and odd digits
present in the number */

#include <stdio.h>

int main()
{
    int n,temp,d,c1=0,c2=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n; 

    if(n==0)
        c1++;

    while(temp!=0)
    {
        d=temp%10;

        if(d%2==0)
            c1++;
        else
            c2++;

        temp=temp/10;
    }

    printf("%d has %d Even digits and %d Odd digits", n,c1,c2);

    return 0;
}