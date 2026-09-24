/* Q.3) Write a program to find the factorial value of a number */

#include <stdio.h>

int main()
{
    int n,i,f=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        f=f*i;
    }

    printf("Factorial value of %d is = %d", n,f);

    return 0;
}