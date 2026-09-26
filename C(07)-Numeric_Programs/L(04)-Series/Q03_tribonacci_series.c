/* Q.3) Write a program to print the tribonacci series

Tribonacci Series:  0 0 1 1 2 4 7 13 24....N */

#include <stdio.h>

int main()
{
    int a=0,b=0,c=1,d,n,i;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Tribonacci Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        d=a+b+c;
        a=b;
        b=c;
        c=d;
    }

    return 0;
}

/* 

Using Recursion:

#include <stdio.h>

int Tribonacci(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 0;

    if(n==2)
        return 1;

    return Tribonacci(n-1) + Tribonacci(n-2) + Tribonacci(n-3);
}

int main()
{
    int n,i;

    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Tribonacci Series: ");

    for(i=0;i<n;i++)
        printf("%d ",Tribonacci(i));

    return 0;
}

*/