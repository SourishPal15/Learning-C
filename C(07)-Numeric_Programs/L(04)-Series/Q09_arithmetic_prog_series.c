/* Q.9) Take the first term, common difference and last term as input from 
the user and then print the arithmetic progression series to N 
and also find the sum of the series upto N 

An Arithmetic Progression is a series in which the difference between 
consecutive terms is always the same.

Example:

2, 5, 8, 11, 14, 17, ....N

Here:

First term a = 2
Common difference d = 3 */

#include <stdio.h>

int main()
{
    int a,d,s=0,n,i;
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common difference: ");
    scanf("%d",&d);
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Arithmetic Progression Series: ");
    for(i=a;i<=n+1;i++)
    {
        printf("%d ", a);
        s = s + a;
        a = a + d;
    }

    printf("\nSum of the AP Series: %d", s);

    return 0;
}