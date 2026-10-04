/* Q.18) Print this pattern: 

        1
      2   3
    4   5   6
  7   8   9   10
11  12  13  14  15

Take n input from user */

#include <stdio.h>

int main()
{
    int n, i, j, k;
    int x=1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(k = 1; k <= n - i; k++)
        {
            printf("  ");
        }

        for(j = 1; j <= i; j++)
        {
            printf("%d   ", x);
            x++;
        }

        printf("\n");
    }

    return 0;
}