/* Q.13) Write a program to print the reciprocal square series and also 
find the sum of the series upto N terms 

Reciprocal Square Series: 1, 1/4, 1/9, 1/16, 1/25....N */

#include <stdio.h>

int main()
{
    int n,i;
    float s=0.0;
    printf("Enter the last term (N): ");
    scanf("%d",&n);

    printf("Reciprocal Square Series: ");
    for(i=1;i<=n;i++)
    {
        printf("1/%d ", i*i);
        s = s + (1.0/(i*i));
    }

    printf("\nSum of the Reciprocal Square Series: %.3f", s);

    return 0;
}