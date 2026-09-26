/* Q.1) Write a program to print these basic type of series: 

Natural Numbers: 1 2 3 4 5 6 7....N 
Even Numbers: 2 4 6 8 10 12....N
Odd Numbers: 1 3 5 7 9 11 13....N */

#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter the last term (N): ");
    scanf("%d", &n);

    printf("Natural Number series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }

    printf("\nEven Number Series: ");
    for(j=2;j<=n;j+=2)
    {
        printf("%d ",j);
    }

    printf("\nOdd Number Series: ");
    for(k=1;k<=n;k+=2)
    {
        printf("%d ",k);
    }

    return 0;
}