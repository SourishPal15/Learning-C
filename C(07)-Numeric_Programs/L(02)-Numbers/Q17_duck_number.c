/* Q.17) Check whether a number is duck number or not, 
a duck number is a number that contains atleast one zero, 
but it should not start with a zero 

Example: 1024 is a Duck number
         0123 is not a duck number */

#include <stdio.h>

int main()
{
    int n,d,temp,check=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = n; 

    while(temp!=0)
    {
        d= temp%10;
        if(d==0)
        {
            check=1;
            break;
        }
        temp = temp/10;
    }
    
    if(check==1)
        printf("Yes, %d is a Duck Number",n);
    else
        printf("No, %d is not a Duck Number",n);

    return 0;
}