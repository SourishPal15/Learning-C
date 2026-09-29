/* Q.25) Check whether two numbers are an amicable pair or not,
Two numbers are Amicable if the sum of the proper divisors of each
number equals the other number.

Example: 220 and 284 */

#include <stdio.h>

int main()
{
    int n1,n2,sn1=0,sn2=0;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1,&n2);
   
    for(int i=1; i<n1; i++)
    {
        if(n1%i==0)
            sn1+=i;
    }
    for(int i=1; i<n2; i++)
    {
        if(n2%i==0)
            sn2+=i;
    }

    if(sn1==n2 && sn2==n1)
        printf("%d and %d are amicable pair numbers", n1,n2);
    else
        printf("%d and %d are not amicable pair numbers", n1,n2);

    return 0;
}