/* Q.5) Take a number and print the first and last digit of that number */

#include <stdio.h>
#include <math.h>

int main()
{
    int n,c=0,temp,f,l;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp!=0)
    {
        c++;
        temp=temp/10;
    }

    f = n / (int)pow(10,(c-1));
    
    if(n<0)
        l=-(n%10);
    else
        l=n%10;

    printf("First Digit of %d is = %d", n,f);
    printf("\nLast Digit of %d is = %d", n,l);

    return 0;
}