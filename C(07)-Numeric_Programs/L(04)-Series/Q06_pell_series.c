/* Q.6) Write a program to print  the pell series

Pell Series: 0 1 2 5 12 29....N */

#include <stdio.h>

int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Pell Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ", a);
        c = (2*b) + a;
        a = b;
        b = c;
    }

    return 0;
}

/*

Using Recursion:

#include <stdio.h>

int Pell(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 1;

    return 2*Pell(n-1) + Pell(n-2);
}

int main()
{
    int n,i;

    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Pell Series: ");

    for(i=0;i<n;i++)
        printf("%d ",Pell(i));

    return 0;
}

*/