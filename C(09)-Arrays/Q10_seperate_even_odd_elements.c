/* Q.10) Separate even and odd elements.

Given an array, rearrange it so that all even elements
are grouped together and all odd elements are grouped
together.

Example:
Array = 7 2 9 4 6 3 8 5

Output:
2 4 6 8 7 9 3 5 */

#include <stdio.h>

void SeparateEvenOdd(int arr[], int n)
{
    int i, j = 0;
    int b[n];

    // Store even elements first
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            b[j] = arr[i];
            j++;
        }
    }

    // Store odd elements after even elements
    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 != 0)
        {
            b[j] = arr[i];
            j++;
        }
    }

    // Copy elements back to original array
    for(i = 0; i < n; i++)
    {
        arr[i] = b[i];
    }
}

int main()
{
    int n, i;

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter value at Index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    SeparateEvenOdd(arr, n);

    printf("\nSeparated Array: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}