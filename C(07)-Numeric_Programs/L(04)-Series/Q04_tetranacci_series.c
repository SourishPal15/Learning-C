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