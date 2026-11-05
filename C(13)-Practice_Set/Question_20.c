/* Q.20) Write a program to display Pascals' Triangle */

#include <stdio.h>

int main()
{
    int n, i, j, num;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid input! Number of rows must be positive.");
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            num = 1;

            for(j = 0; j < n-i-1; j++)
                printf(" ");

            for(j = 0; j <= i; j++)
            {
                printf("%d ", num);
                num = num * (i-j) / (j+1);
            }

            printf("\n");
        }
    }

    return 0;
}