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