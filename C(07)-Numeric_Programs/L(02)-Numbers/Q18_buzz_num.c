/* Q.18) Check whether a number is Buzz number or not,
a buzz number is a number which is divisible by 7 
OR ends with 7 itself 

Example: 21 (divisible by 7)
         37 (ends with 7) */

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if((n%7==0) || (n%10==7))
        printf("Yes, %d is a Buzz Number",n);
    else    
        printf("No, %d is not a Buzz Number",n);

    return 0;
}