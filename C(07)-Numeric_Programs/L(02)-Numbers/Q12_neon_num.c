/* Q.12) Check whether a number is neon number or not, a neon number is a number
whose sum of the digits of its square is equal to the number 

Example: 9, 9x9=81, 8+1=9 */

#include <stdio.h>

int main()
{
    int n,sq,temp,d,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    sq = n * n;
    temp = sq;

    while(temp!=0)
    {
        d = temp%10;
        s = s + d;
        temp = temp / 10;
    }

    if(s==n)
        printf("Yes, %d is a Neon Number",n);
    else
        printf("No. %d is not a Neon Number",n);

    return 0;
}