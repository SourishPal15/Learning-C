/* Q.10) Print this pattern: 

****
 ***
  **
   *

Take 'n' input from the user */

#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}