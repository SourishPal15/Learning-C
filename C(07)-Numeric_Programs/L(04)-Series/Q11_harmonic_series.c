/* Q.11) Write a program to print the harmoniic series and also find 
the sum of the series upto N 

Harmonic Series: 1, 1/2, 1/3, 1/4, 1/5....1/N */

#include <stdio.h>

int main()
{
    int n,i;
    float s=0.0;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Harmonic Series: ");
    for(i=1;i<=n;i++)
    {
        printf("1/%d ", i);
        s = s + (1.0/i);
    }
    
    printf("\nSum of the Harmonic Series: %.3f",s);

    return 0;
}