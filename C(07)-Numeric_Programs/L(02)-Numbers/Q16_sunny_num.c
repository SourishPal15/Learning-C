/* Q.16) Check whether a number is sunny number or not, 
a sunny number is a number, whose next number is a perfect 
square. 

Example: 8, next number is 9
            and 9 is a perfect square (of 3) */

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    double root;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    root = sqrt(n+1);

    if(root*root==n+1)
        printf("Yes, %d is a Sunny Number",n);
    else
        printf("No, %d is not a Sunny Number",n);

    return 0;
}