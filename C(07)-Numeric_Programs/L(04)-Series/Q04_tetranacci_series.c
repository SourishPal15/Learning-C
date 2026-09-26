/* Q.4) Write a program to print the Tetranacci series

Tetranacci Series: 0 0 0 1 1 2 4 8 15 29....N */

#include <stdio.h>

int main()
{
    int a=0,b=0,c=0,d=1,e,n,i;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Tetranacci Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a);
        e=a+b+c+d;
        a=b;
        b=c;
        c=d;
        d=e;
    }

    return 0;
}

/*

Using Recursion: 

#include <stdio.h>

int Tetranacci(int n)
{
    if(n==0)
        return 0;

    if(n==1)
        return 0;

    if(n==2)
        return 0;

    if(n==3)
        return 1;

    return Tetranacci(n-1) + Tetranacci(n-2) + 
           Tetranacci(n-3) + Tetranacci(n-4);
}

int main()
{
    int n,i;

    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Tetranacci Series: ");

    for(i=0;i<n;i++)
        printf("%d ",Tetranacci(i));

    return 0;
}

*/