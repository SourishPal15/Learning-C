/* Q.5) Write a program to print the Lucas series

Lucas Series: 2 1 3 4 7 11 18....N */

#include <stdio.h>

int main()
{
    int a=2,b=1,c,n,i;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Lucas Series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}

/*

Using Recursion: 

#include <stdio.h>

int Lucas(int n)
{
    if(n==0)
        return 2;

    if(n==1)
        return 1;

    return Lucas(n-1) + Lucas(n-2);
}

int main()
{
    int n,i;

    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Lucas Series: ");

    for(i=0;i<n;i++)
        printf("%d ",Lucas(i));

    return 0;
}

*/