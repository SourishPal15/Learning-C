/* Q.13) Print this pattern:

A
B B
C C C 
D D D D

Take n input from the user */

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}