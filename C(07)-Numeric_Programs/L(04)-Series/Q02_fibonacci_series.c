/* Q.2) Write a program to print the Fibonacci Series

Fibonacci Series: 0 1 1 2 3 5 8 13 21....N */

#include <stdio.h>

int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the last term (N): ");
    scanf("%d",&n);
    
    printf("Fibonacci Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}