/* Q.6) Check whether a number is Armstrong number or not, an
armtrong number is a number where the sum of its own digits raised
to the power of the total number or digits is equal to that number

Example: 153 = 1^3 + 5^3 + 3^3 
         1634 = 1^4 + 6^4 + 3^4 + 4^4 */

#include <stdio.h>
#include <math.h>

int main()
{
    int n,temp,d,c=0,arm=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n;

    while(temp!=0)
    {
        c++;
        temp=temp/10;
    }

    temp = n;

    while(temp!=0)
    {
        d=temp%10;
        arm = arm + (int)pow(d,c);
        temp=temp/10;
    }

    if(arm==n)
        printf("Yes, %d is a %d digit Armstrong Number",n,c);
    else
        printf("No, %d is not an Armstrong Number", n);

    return 0;
}