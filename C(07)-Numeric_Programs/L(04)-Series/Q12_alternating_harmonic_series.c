/* Q.12) Write a program to print the alternating harmonic series
and also find its sum upto N terms. 

Alternating Harmonic Series: 1,-1/2,1/3,-1/4,1/5,-1/6....N */

#include <stdio.h>

int main()
{
    int n,i;
    float s=0.0;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Alternating Harmonic Series: ");
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("-1/%d ",i);
            s = s - (1.0/i);
        }
        else
        {
            printf("1/%d ",i);
            s = s + (1.0/i);
        }
    }

    printf("\nSum of the Alternating Harmonic Series: %.3f", s);

    return 0;
}