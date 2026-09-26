/* Q.7) Write a program to print the Jacobsthal series

Jacobsthal Series: 0 1 1 3 5 11 21 43....N */

#include <stdio.h>

int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Jacobsthal Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        c = (2*a) + b;
        a = b; 
        b = c;
    }

    return 0;
}

/*

Using Recursion: 

#include <stdio.h>

int Jacobsthal(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    return Jacobsthal(n-1) + 2*Jacobsthal(n-2);
}

int main()
{
    int n,i;

    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Jacobsthal Series: ");

    for(i=0;i<n;i++)
        printf("%d ",Jacobsthal(i));

    return 0;
}

*/