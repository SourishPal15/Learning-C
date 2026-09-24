/* Q.3) Take a number and print it in reverse order */

#include <stdio.h>

int main()
{
    int n,temp,d,r=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp=n;

    while(temp!=0)
    {
        d=temp%10;
        r=(r*10)+d;
        temp=temp/10;
    }
    
    printf("%d in Reverse order is = %d", n,r);

    return 0;
}