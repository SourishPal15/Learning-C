/* Q.3) Print this pattern: 

1
1 2 
1 2 3
1 2 3 4

Take 'n' input from the user */

#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}