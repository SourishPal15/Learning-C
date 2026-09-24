/* Q.7) Check whether a number is pefect or not, a perfect
number is a number whose sum of its proper factors/divisors 
is eqal to the number itself

Example: 6 = 1 + 2 + 3
         28 = 1 + 2 + 4 + 7 + 14 */

#include <stdio.h>

int main()
{
    int n,i,s=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=1;i<n;i++)
    {
        if(n%i==0)
            s=s+i;
    }

    printf("Sum of proper divisors of %d = %d\n",n,s);

    if(s==n)
        printf("Yes, %d is a Perfect Number", n);
    else
        printf("No, %d is not a Perfect Number", n);

    return 0;
}