/* Q.8) Print this pattern: 

10
9 8
7 6 5
4 3 2 1 

Take 'n' input from the user */

#include <stdio.h>

int main()
{
    int n,i,j,x=10;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",x);
            x--;
        }
        printf("\n");
    }

    return 0;
}