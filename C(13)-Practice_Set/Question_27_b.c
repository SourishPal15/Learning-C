/* Q.27.b) Implement Binary Search on an array of n elements */

#include <stdio.h>

int main()
{
    int n, i, key, low, high, mid, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    int a[n];

    printf("Enter %d elements in ascending order: ", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (a[mid] == key)
        {
            found = 1;
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (found == 1)
        printf("Element found at position %d.", mid + 1);
    else
        printf("Element not found in the array.");

    return 0;
}