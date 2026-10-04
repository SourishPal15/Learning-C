/* Q.17) Print this pattern: 

        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1

Take n input from the user */

#include <stdio.h>

int main()
{
    int n, i, j, k;
    int x;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(k = 0; k < n - i - 1; k++)
        {
            printf("  ");
        }

        x = 1;

        for(j = 0; j <= i; j++)
        {
            printf("%d   ", x);

            x = x * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}