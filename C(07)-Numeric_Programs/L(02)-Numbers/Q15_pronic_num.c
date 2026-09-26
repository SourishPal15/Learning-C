/* Q.15) Check whether a numbver is pronic number or not, 
A Pronic number is the product of two consecutive positive integers.

Example: 20 = 4 × 5 */

#include <stdio.h>

int main()
{
    int n,i,check=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i*i<=n;i++)
    {
        if(i*(i+1)==n)
        {
            check = 1;
            break;
        }
    }

    if(check == 1)
        printf("Yes, %d is a Pronic Number",n);
    else
        printf("No, %d is not a Pronic Number",n);

    return 0;
}