/* Q.8) Write a program to print the Padovan series

Padovan Series: 1 1 1 2 2 3 4 5 7 9....N */

#include <stdio.h>

int main()
{
    int a=1,b=1,c=1,d,n,i;
    printf("Enter the last term (N): ");
    scanf("%d", &n);

    printf("Padovan Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ", a);
        d = a + b;
        a = b;
        b = c;
        c = d;
    }

    return 0;
}

/*

Using Recursion: 

#include <stdio.h>

int Padovan(int n)
{
    if(n==0 || n==1 || n==2)
        return 1;

    return Padovan(n-2) + Padovan(n-3);
}

int main()
{
    int n,i;

    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Padovan Series: ");

    for(i=0;i<n;i++)
        printf("%d ",Padovan(i));

    return 0;
}

*/