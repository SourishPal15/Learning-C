/* Q.10) Take the first term, common ratio and last term as input from 
the user and then print the geometric progression series to N 
and also find the sum of the series upto N 

A Geometric Progression is a series in which each term is obtained by
multiplying the previous term by the same number.

Example:

2, 6, 18, 54, 162, ....N

Here:

First term a = 2
Common ratio r = 3 */

#include <stdio.h>

int main()
{
    int a,r,s=0,n,i;
    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common ratio: ");
    scanf("%d",&r);
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Geometric Progression Series: ");
    for(i=a;i<=n+1;i++)
    {
        printf("%d ", a);
        s = s + a;
        a = a * r;
    }

    printf("\nSum of the GP Series: %d", s);

    return 0;
}