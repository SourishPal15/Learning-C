/* Q.1) Using for loop print the sum of numbers from 1 to N */

#include <stdio.h>

int main()
{
    int i,n,s=0;
    printf("Enter the last term (N): ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum of numbers from 1 to %d= %d",n,s);

    return 0;
}