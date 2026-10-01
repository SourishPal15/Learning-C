/* Q.6) Print this pattern: 

4 4 4 4
3 3 3 
2 2 
1

Take 'n' input from the user */

#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }

    return 0;
}