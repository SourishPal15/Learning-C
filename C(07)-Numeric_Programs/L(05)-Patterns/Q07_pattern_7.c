/* Q.7) Print this pattern: 

1
2 3
4 5 6
7 8 9 10

Take 'n' input from the user */

#include <stdio.h>

int main()
{
    int n,i,j,x=1;
    printf("Enter n: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }

    return 0;
}