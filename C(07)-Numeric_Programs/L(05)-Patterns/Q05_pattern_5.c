/* Q.5) Print this pattern :

1
2 2
3 3 3
4 4 4 4

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
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}