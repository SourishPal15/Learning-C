/* Q.14) Check whether a number is happy number or not, 
A Happy number eventually becomes 1 when repeatedly replaced 
by the sum of the squares of its digits. 

Example: 19, 1^2 + 9^2 = 82
             8^2 + 2^2 = 68
             6^2 + 8^2 = 100
             1^2 + 0^2 + 0^2 = 1 */

#include <stdio.h>

int main()
{
    int n,temp,s,d;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n;

    while(1)
    {
        s = 0;

        while(temp!=0)
        {
            d = temp % 10;
            s = s + (d*d);
            temp = temp / 10;
        }

        if(s==1 || s==4)
            break;

        temp = s;
    }

    if(s==1)
        printf("Yes, %d is a Happy Number",n);
    else
        printf("No, %d is not a Happy Number",n);

    return 0;
}