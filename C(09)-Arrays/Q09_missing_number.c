/* Q.9) Find the missing number from 1 to N.

Given an array containing numbers from 1 to N with one
number missing, find the missing number.

Example:

N = 5
Array = 1 2 4 5

Missing number = 3 */

#include <stdio.h>

void FindMissing(int arr[], int n)
{
    int i, j, found;

    printf("Missing numbers: ");

    for(i = 1; i <= n; i++)
    {
        found = 0;

        for(j = 0; j < n - 1; j++)
        {
            if(arr[j] == i)
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
            printf("%d ", i);
    }
}

int main()
{
    int n, i;

    printf("Enter N: ");
    scanf("%d", &n);

    int arr[n - 1];

    for(i = 0; i < n - 1; i++)
    {
        do
        {
            printf("Enter value at Index %d (1-%d): ", i, n);
            scanf("%d", &arr[i]);

            if(arr[i] < 1 || arr[i] > n)
                printf("Invalid input! Enter a number between 1 and %d.\n", n);

        } while(arr[i] < 1 || arr[i] > n);
    }

    printf("\nOriginal Array: ");

    for(i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    FindMissing(arr, n);

    return 0;
}