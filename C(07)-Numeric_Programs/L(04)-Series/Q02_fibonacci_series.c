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

/*

Using Recursion: 

#include <stdio.h>

int Fibonacci(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
    int n,i;

    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Fibonacci Series: ");

    for(i=0;i<n;i++)
        printf("%d ",Fibonacci(i));

    return 0;
}

*/